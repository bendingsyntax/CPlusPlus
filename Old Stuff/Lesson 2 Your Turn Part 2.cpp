#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned seed;
	int luckyNumber;
	seed = time(0);
	srand(seed);
	luckyNumber = rand() % 100 + 2;

	cout << "This program will output a random number between 1 and 100.\n";
	cout << "The Random number is: " << luckyNumber << endl;

	cout << "Press Enter to continue...";
	cin.get();

	return 0;
}