#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	string career1, career2, career3, career4, career5, career6;

	int randomNum;

	unsigned seed = time(0);
	srand(seed);

	cout << "I am a fortune teller. Look into my crystal screen \n"
		<< "and enter 6 careers you would like to have. Example: \n\n"
		<< "      Chef \n      Astronaut \n      CIA Agent  \n\n"
		<< "Then I will predict what you will be. \n\n";

	cout << "Career choice 1: ";
	getline(cin, career1);
	cout << "Career choice 2: ";
	getline(cin, career2);
	cout << "Career choice 3: ";
	getline(cin, career3);
	cout << "Career choice 4: ";
	getline(cin, career4);
	cout << "Career choice 5: ";
	getline(cin, career5);
	cout << "Career choice 6: ";
	getline(cin, career6);

	randomNum = 1 + rand() % 4;
	/*
	if (randomNum == 1)
		cout << "\nYou will be a " << career1 << ". \n";
	else if (randomNum == 2)
		cout << "\nYou will be a " << career2 << ". \n";
	else if (randomNum == 3)
		cout << "\nYou will be a " << career3 << ". \n";
	else if (randomNum == 4)
		cout << "\nYou will be a " << career4 << ". \n";
	else if (randomNum == 5)
		cout << "\nYou will be a " << career5 << ". \n";
	else if
		cout << "\nYou will be a " << career6 << ". \n";
	else
		cout << "\nSorry. you will not be any of these. \n";
	*/

	switch (randomNum)
	{
	case 1: cout << "\nYou will be a " << career1 << ". \n";
		break;
	case 2: cout << "\nYou will be a " << career2 << ". \n";
		break;
	case 3: cout << "\nYou will be a " << career3 << ". \n";
		break;
	case 4: cout << "\nYou will be a " << career4 << ". \n";
		break;
	case 5: cout << "\nYou will be a " << career5 << ". \n";
		break;
	case 6: cout << "\nYou will be a " << career6 << ". \n";
		break;
	default:
		cout << "\nSorry. you will not be any of these. \n";
	}

	return 0;
}