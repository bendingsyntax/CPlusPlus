#include "Inventory.h"
#include "Functions.h"
#include <iostream>
using namespace std;

int Functions::partNumber()
{
	cout << "Item Number  : ";
	cin >> nums;
	return nums;
};

int Functions::numberOf()
{
	cout << "Quantity     : ";
	cin >> qtys;
	if (qtys < 0)
	{
		cout << "Item number must be 0 or greater. Please try again: ";
		cin >> qtys;
		if (qtys < 0)
		{
			cout << "\nToo many failed attempts, closing program.";
			return 0;
		}
	}
	else
		return qtys;
	return 0;
};

double Functions::stickerPrice()
{
	cout << "Cost         : ";
	cin >> costs;
	if (costs < 0.00)
	{
		cout << "Item number must be 0 or greater. Please try again: ";
		cin >> costs;
		if (costs < 0.00)
		{
			cout << "\nToo many failed attempts, closing program.";
			return 0;
		}
	}
	else
		return costs;
	return 0;
};