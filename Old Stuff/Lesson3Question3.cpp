#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PENNY = 0.01, NICKLE = 0.05, DIME = 0.10, QUARTER = 0.25;
	int coins[4];  /*This creates an integer array with positions from 0 to 3 (all values are empty), 
					the 4 has to account for the null terminator in the array (all values in this array must be numbers and will be converted to integers)*/
	double total = 0;

	cout << "This program will ask you to enter any number of different coins and if the "
		<< "\ntotal is a dollar exactly ($1.00) you win!" << endl;
	cout << "Please enter an amount either 0 or greater for each number of coins." << endl;
	cout << "Number of Pennies: ";
	cin >> coins[0]; //sets the input from the user to position 0 in the integer array
	cout << "Number of Nickles: ";
	cin >> coins[1]; //sets the input from the user to position 1 in the integer array
	cout << "Number of Dimes: ";
	cin >> coins[2]; //sets the input from the user to position 2 in the integer array
	cout << "Number of Quarters: ";
	cin >> coins[3]; //sets the input from the user to position 3 in the integer array

	total = ((PENNY * coins[0]) + (NICKLE * coins[1]) + (DIME * coins[2]) + (QUARTER * coins[3]));

	if (total == 1.00)
	{
		cout << "The total dollar amount in coins is: $" << fixed << setprecision(2) << total
			<< " You win!" << endl;
	}
	else
		cout << "Sorry the total dollar amount was less than or more than one dollar. The total was: $" << fixed << setprecision(2) << total
		<< " Try again!\n";
}