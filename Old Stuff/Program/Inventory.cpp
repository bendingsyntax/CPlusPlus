#include "Inventory.h"

Inventory::Inventory()
{
	itemNum = qty = cost = 0;
}

Inventory::Inventory(int num, int q, double price)
{
	itemNum = num;
	qty = q;
	cost = price;
}

int Inventory::setItemNumber(int item)
{
	itemNum = item;
	return itemNum;
}

int Inventory::setQuantity(int numOf)
{
	/*bool valid = true;
	if (numOf >= 0)*/
		qty = numOf;
	/*else
		valid = false;

	return valid;*/
		return qty;
}

int Inventory::setCost(double idvCost)
{
	/*bool valid = true;
	if (idvCost >= 0.00)*/
		cost = idvCost;
		/*else
		valid = false;

	return valid; */
		return cost;
}

int Inventory::getItemNumber()
{
	return itemNum;
}

int Inventory::getQuantity()
{
	return qty;
}

double Inventory::getCost()
{
	return cost;
}

double Inventory::getTotalCost()
{
	return qty * cost;
}