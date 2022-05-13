#include <iostream>
#include <Windows.h>
using namespace std;

void placeCursor(HANDLE, int, int);
void printStars(int);

int main()
{
	const int midRow = 12, midCol = 40, numBoxes = 3;
	int width, startRow, endRow;

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int box = 1, height = 1; box <= numBoxes; box++, height += 2)
	{
		startRow = midRow - box;
		endRow = midRow + box;
		width = box * 5 + (box + 1) % 2;

		placeCursor(screen, startRow, midCol - width / 2);
		printStars(width);

		for (int sideRow = 1; sideRow <= height; sideRow++)
		{
			placeCursor(screen, startRow + sideRow, midCol - width / 2);
			cout << '*' << endl;
			placeCursor(screen, startRow + sideRow, midCol + width / 2);
			cout << '*' << endl;
		}

		placeCursor(screen, endRow, midCol - width / 2);
		printStars(width);

		Sleep(750);
	}

	placeCursor(screen, 20, 0);
	return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{
	COORD position;
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

void printStars(int numStars)
{
	for (int star = 1; star <= numStars; star++)
		cout << '*';
	cout << endl;
}