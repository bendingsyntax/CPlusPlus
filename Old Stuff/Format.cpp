#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*int num1 = 2897, num2 = 5,		num3 = 837,
		num4 = 34,	 num5 = 7,		num6 = 1623,
		num7 = 390,  num8 = 3456,	num9 = 12;
	cout  << setw(10) << num1 << setw(10) << num2 << setw(10) << num3 << endl;

	cout << setw(10) << num4 << setw(10) << num5 << setw(10) << num6 << endl;

	cout << setw(10) << num7 << setw(10) << num8 << setw(10) << num9 << endl;

	return 0; */

	double day1, day2, day3, total;

	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;
	cout << "Enter the sales for day 3: ";
	cin >> day3;

	total = day1 + day2 + day3;

	cout << endl << left << setw(20) << "Sales Figures" << endl;
	cout << "-------------\n";
	cout << fixed << setprecision(2);
	cout << "Day 1: " << setw(15) << day1 << endl;
	cout << "Day 2: " << setw(15) << day2 << endl;
	cout << "Day 3: " << setw(15) << day3 << endl;
	cout << "Total: " << setw(15) << total << endl;

	return 0;

}