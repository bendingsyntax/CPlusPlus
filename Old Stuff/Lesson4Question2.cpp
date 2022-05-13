#include <iostream>
#include <Windows.h>
using namespace std;

/*
int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int color = 0; color < 16; color++)
	{
		SetConsoleTextAttribute(screen, color);
		cout << " Hello World!" << endl;
		Sleep(400);
	}

	SetConsoleTextAttribute(screen, 7);
	return 0;
} */


int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	int color = 10;

	for (char letter = 'A'; letter <= 'Z'; letter++)
	{
		SetConsoleTextAttribute(screen, color);
		cout << letter << "  " << endl;

		color += 2;
		if (color > 14)
			color = 10;

		Sleep(280);
	}

	SetConsoleTextAttribute(screen, 7);
	return 0;
}