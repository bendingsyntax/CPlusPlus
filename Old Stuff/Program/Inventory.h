#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
	int itemNum;
	int qty;
	double cost;
public:
	Inventory();
	Inventory(int num, int q, double price);
	int setItemNumber(int);
	int setQuantity(int);
	int setCost(double);
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};
#endif
