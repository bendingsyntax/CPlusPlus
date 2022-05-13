#include <iostream>
using namespace std;

int main()
{
	double cost, min;
	const double percent = .8;

	cout << "This program will calculate the minimum amount of insurance.";
	cout << "\nPlease Enter the cost to replace the building: ";
	cin >> cost;
	min = cost * percent;

	cout << "The minimum amount of insurance needed is: " << min << endl;

	return 0;
}