#include <iostream>
#include <Windows.h>
using namespace std;

int mediumType();
void displayMenu();
double distance();
double calculateTime(int&, double&);

const int EXIT = 4;

int main()
{
	int mediumChoice;
	double length, totalTime;

	do
	{
		displayMenu();
		mediumChoice = mediumType();
		if (mediumChoice != EXIT)
		{
			length = distance();
			totalTime = calculateTime(mediumChoice, length);
			cout << "The amount of time a sound wave will take to travel\n"
				<< length << " feet (number converted for math), is about : "
				<< totalTime << " feet per second" << endl;
			cout << "Press enter to return to menu.";
			cin.get();
			cin.get();
		}
	} while (mediumChoice != EXIT);
	return 0;
}

void displayMenu()
{
	system("cls");
	cout << "This program will calculate how many seconds it takes \n"
		<< "a sound wave to travel a given distence between three \n"
		<< "different mediums.";
	cout << "Please select a medium.\n"
		<< "1. Air\n2. Water\n3. Steel\n4. EXIT\nChoice:";
}

int mediumType()
{
	int selection;
	cin >> selection;
	while (selection < 1 || selection > EXIT)
	{
		cout << "There are only Three options please try again.";
		cin >> selection;
	}
	return selection;
}

double distance()
{
	double feet = 0, inches = 0, total = 0;
	system("cls");


	cout << "Please enter the distance in feet and inches\n";
	cout << "feet: ";
	cin >> feet;
	if (feet > 0)
	{
		cout << "Please enter inches. (if none enter 0)\n";
		cin >> inches;
		if (feet < 0 && inches <= 0)
		{
			cout << "this is an invalid input, restarting input"
				<< "\nPlease Press enter";
			cin.get();
			cin.get();
			distance();
		}
	}

	total = ((inches / 12) + feet);
	return total;
}

double calculateTime(int &mediumChoice, double &length)
{
	int AIR = 1100, WATER = 4900, STEEL = 16400;
	double seconds;
	switch (mediumChoice)
	{
	case 1: seconds = length / AIR;
		break;
	case 2: seconds = length / WATER;
		break;
	case 3: seconds = length / STEEL;
		break;
	default:
		break;
	}
	return seconds;
}