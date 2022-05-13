#include <iostream>
#include <string>
using namespace std;

int main()
{
	string months[4];
	double rainFall[4], avg;

	cout << "This program will ask the user for three months of the year and ";
	cout << "\nthe rain fall recordings in inches for that month. It will then ";
	cout << "\ncalculate the average rain fall.\n";

	cout << "Please enter the month name: ";
	cin >> months[0];
	cout << "Please enter the rain fall in inches: ";
	cin >> rainFall[0];
	cout << "Please enter the month name: ";
	cin >> months[1];
	cout << "Please enter the rain fall in inches: ";
	cin >> rainFall[1];
	cout << "Please enter the month name: ";
	cin >> months[2];
	cout << "Please enter the rain fall in inches: ";
	cin >> rainFall[2];
	cout << endl;

	avg = (rainFall[0] + rainFall[1] + rainFall[2]) / 3;

	cout << "The average rainfall for: "
		<< months[0] << ", " << months[1] << ", and " << months[2]
		<< " is : " << avg << endl;

	return 0;
}