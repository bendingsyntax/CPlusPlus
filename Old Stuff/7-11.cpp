#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double len)
	{
		length = len;
	}
	void setWidth(double wid)
	{
		width = wid;
	}

	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	double calcArea()
	{
		return length * width;
	}
};

class Carpet
{
private:
	double pricePerSqYd;
	Rectangle size;

public:
	void setPricePerYd(double p)
	{
		pricePerSqYd = p;
	}

	void setDimensions(double len, double wid)
	{
		size.setLength(len / 3);
		size.setWidth(wid / 3);
	}

	double getTotalPrice()
	{
		return (size.calcArea() * pricePerSqYd);
	}
};

int main()
{
	Carpet purchase;
	double pricePerYd;
	double length;
	double width;

	cout << "Room length in feet: ";
	cin >> length;
	cout << "Room width in feet : ";
	cin >> width;
	cout << "Carpet price per sq. yard: ";
	cin >> pricePerYd;

	purchase.setDimensions(length, width);
	purchase.setPricePerYd(pricePerYd);

	cout << "\nThe total price of my new " << length << " x " << width
		<< " carpet is $" << purchase.getTotalPrice() << endl;
	return 0;
}