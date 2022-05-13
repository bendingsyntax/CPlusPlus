#include <iostream>
#include <Windows.h>
using namespace std;

void displayMenu();
int getChoice();
void makeJackOLantern();

const int QUIT = 6, MAX_CHOICE = 6;

int main()
{
	int colorChoice;

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	do
	{
		SetConsoleTextAttribute(screen, 7);
		displayMenu();
		colorChoice = getChoice();

		if (colorChoice != QUIT)
		{
			SetConsoleTextAttribute(screen, colorChoice + 9);
			makeJackOLantern();
		}
	} while (colorChoice != QUIT);
	return 0;
}

void displayMenu()
{
	system("cls");
	cout << "I will draw a Jack-o-lantern. What color should it be?\n\n"
		<< "Enter   1 for Green	2 for Blue	3 for Red \n"
		<< "	4 for purple	5 for Yellow	6 to quit: ";
}

int getChoice()
{
	int choice;
	cin >> choice;
	while (choice < 1 || choice > MAX_CHOICE)
	{
		cout << "\nThe only valid choices are 1 - " << MAX_CHOICE
			<< ". Please re-enter. ";
		cin >> choice;
	}
	return choice;
}

void makeJackOLantern()
{
	cout << "\n\n";
	cout << "					^   ^  \n";
	cout << "					  *    \n";
	cout << "					\\___/    " << endl;
	cout << "\n\n		         Press Enter to return to the menu.";
	cin.get();
	cin.get();
}