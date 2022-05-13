#include <iostream>
#include "Functions.h"
#include "Inventory.h"
using namespace std;

int main()
{
	Inventory output;
	Functions input;
	int x, y;
	double z;

	cout << "This program will accept the item number, quantity, and cost.\n";
	cout << "then it will display the information formatted along with the total\n";
	cout << "cost for the quantity provided." << endl << endl;

	x = input.partNumber();
	y = input.numberOf();
	z = input.stickerPrice();

	output.setItemNumber(x);
	output.setQuantity(y);
	output.setCost(z);

	cout << output.getItemNumber() << endl;
	cout << output.getQuantity() << endl;
	cout << output.getQuantity() << endl;
	cout << output.getTotalCost() << endl;
}