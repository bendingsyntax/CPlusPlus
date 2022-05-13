#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct InvItem
{
	int partNum;
	string desciption;
	int onHand;
	double price;
};

InvItem/*void*/ getItemData(/*InvItem &*/);

void showItem(const InvItem &);

int main()
{
	InvItem part;

	//getItemData(part);
	part = getItemData();
	showItem(part);
	return 0;
}

InvItem /*void*/ getItemData(/*InvItem &item*/)
{
	InvItem item;

	cout << "Enter the part number: ";
	cin >> item.partNum;
	cout << "Enter the part description: ";
	cin.get();

	getline(cin, item.desciption);
	cout << "Enter the quantity on hand: ";
	cin >> item.onHand;
	cout << "Enter the unit price: ";
	cin >> item.price;

	return item;
}

void showItem(const InvItem &item)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Part Number  : " << item.partNum << endl;
	cout << "Description  : " << item.desciption << endl;
	cout << "Units On Hand: " << item.onHand << endl;
	cout << "Price        : $" << item.price << endl;
}