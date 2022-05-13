#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//const double PI = 3.141592;
	double PI = 3.141592;
	double area, radius;

	cout << "This program calculates the area of a circle.\n";
	cout << "What is the radius of the circle? ";
	cin >> radius;
	PI = 3.14;

	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;
	return 0;
}