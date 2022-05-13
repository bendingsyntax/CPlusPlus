#include <iostream>
#include <iomanip>
using namespace std;

void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);

int main()
{
	int pickFrom, numPicks;
	long int ways;

	cout << "This program will tell you your probability of winning"
		<< "\"Little Lotto\". \n";
	getLotteryInfo(pickFrom, numPicks);
	ways = computeWays(pickFrom, numPicks);

	cout << fixed << showpoint << setprecision(4);
	cout << "\nYour chance of winning the lottery is "
		<< "1 change in " << ways << ".\n";
	cout << "This is a probability of " << (1.0 / ways) << "\n";
	return 0;
}

void getLotteryInfo(int &pickFrom, int &numPicks)
{
	cout << "\nHow many numbers (1-12) are there to pick from? ";
	cin >> pickFrom;
	while (pickFrom < 1 || pickFrom > 12)
	{
		cout << "There must be between 1 and 12 numbers.\n"
			<< "how many numbers (1 - 12) are there to pick from? ";
		cin >> pickFrom;
	}
	cout << "How man numbers must you pick to play? ";
	cin >> numPicks;
	while (pickFrom < 1 || numPicks > pickFrom)
	{
		if (numPicks < 1)
			cout << "You must pick at least one number.\n";
		else
			cout << "You must pick " << pickFrom << " Or fewer numbers.\n";

		cout << "How many numbers must you pick to play? ";
		cin >> numPicks;
	}
}

long int computeWays(int n, int k)
{
	return (factorial(n) / factorial(k) / factorial(n - k));
}

long int factorial(int number)
{
	long int factTotal = 1;

	for (int count = number; count >= 1; count--)
	{
		factTotal *= count;
	}
	return factTotal;
}
