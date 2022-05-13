#include <iostream>
#include <cmath>
using namespace std;

class Circle
{private:
	double radius;

public:
	Circle();
	void setRadius(double);

	double calcArea();

};

Circle::Circle()
{
	radius = 1;
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::calcArea()
{
	return 3.14 * pow(radius, 2);
}

int main()
{
	Circle circle1, circle2;

	//circle1.setRadius(1);
	circle2.setRadius(2.5);

	cout << "The area of the circle1 is " << circle1.calcArea() << endl;
	cout << "The area of the circle2 is " << circle2.calcArea() << endl;

	return 0;
}