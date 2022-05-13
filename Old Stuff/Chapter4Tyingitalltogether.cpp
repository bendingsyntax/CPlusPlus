#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string career1, career2, career3;

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

	randomNum = 1 + rand() % 4;

	if (randomNum == 1)
		cout << "\nYou will be a " << career1 << ". \n";
	else if (randomNum == 2)
		cout << "\nYou will be a " << career2 << ". \n";
	else if (randomNum == 3)
		cout << "\nYou will be a " << career3 << ". \n";
	else
		cout << "\nSorry. you will not be any of these. \n";

	return 0;
}