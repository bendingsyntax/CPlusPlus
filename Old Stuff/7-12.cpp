#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin >> boxLength;
	cout << "wWhat is the width? ";
	cin >> boxWidth;

	if (!box.setLength(boxLength))
		cout << "Invalid box Length entered.\n";
	else if (!box.setWidth(boxWidth))
		cout << "Invalid box Width entered.\n";
	else
	{
		cout << "\nHere is the rectangle's data:\n";
		cout << "Length: " << box.getLength() << endl;
		cout << "Width : " << box.getWidth() << endl;
		cout << "Area  : " << box.calcArea() << endl;
	}

	return 0;
}