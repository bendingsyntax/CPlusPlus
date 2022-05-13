#include <iostream>
using namespace std;

int main()
{
	double gallons, miles, MPG;

	cout << "This program will calculate the gas mileage of a vehicle.\n";
	cout << "Please enter the number of gallons the vehicle can hold.\n";
	cin >> gallons;
	cout << "Please enter the number of miles the vehcile can travel on a full tank.\n";
	cin >> miles;
	
	MPG = miles / gallons;

	cout << "The miles per gallon of this vehicle is : " << MPG << endl;
	return 0;

}