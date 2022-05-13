#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_WORKERS = 5;
	int hours[NUM_WORKERS];
	double payRate;
	double grossPay;

	cout << "Enter the hours worked by \n";
	for (int worker = 0; worker < NUM_WORKERS; worker++)
	{
		cout << "Employee #" << (worker + 1) << ":";
		cin >> hours[worker];
	}

	cout << "\nAll these employees have the same pay rate."
		<< "\nEnter this hourly pay rate: $";
	cin >> payRate;

	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);

	for (int worker = 0; worker < NUM_WORKERS; worker++)
	{
		grossPay = hours[worker] * payRate;
		cout << "Employee #" << (worker + 1) << ": $"
			<< setw(7) << grossPay << endl;
	}
	return 0;
}