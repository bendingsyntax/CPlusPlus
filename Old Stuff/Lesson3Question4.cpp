#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double UNDER = 18.5, OVER = 25;
	double weight, height, BMI;

	cout << "This program will calculate the users Body Mass Index(BMI),"
		<< "\nUser will be asked for Both Height (in inches) and Weight (in pounds)." << endl;
	cout << "Please enter Height (in inches): ";
	cin >> height;
	cout << "Please enter Weight (in pounds): ";
	cin >> weight;

	BMI = (weight * (703 / (pow(height, 2))));

	if (BMI < UNDER)
		cout << "According to the Body Mass Index " << BMI << " is underweight." << endl;
	else if ((BMI > UNDER) && (BMI < OVER))
		cout << "According to the Body Mass Index " << BMI << " is optimal." << endl;
	else
		cout << "According to the Body Mass Index " << BMI << " is overweight." << endl;

	return 0;
}