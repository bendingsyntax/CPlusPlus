#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 40, 3 };
	SetConsoleCursorPosition(screen, pos);
	cout << "O" << endl;
	Sleep(500);

	for (int tossIt = 1; tossIt <= 3; tossIt++)
	{
		while (pos.Y <= 20)
		{
			SetConsoleCursorPosition(screen, pos);
			cout << "|" << endl;
			pos.Y++;
			SetConsoleCursorPosition(screen, pos);
			cout << "O" << endl;
			Sleep(100);
		}

		while (pos.Y > 3)
		{
			SetConsoleCursorPosition(screen, pos);
			cout << " " << endl;
			pos.Y--;
			SetConsoleCursorPosition(screen, pos);
			cout << "O" << endl;
			Sleep(100);
		}
	}
	return 0;
}