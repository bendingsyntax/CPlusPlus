#include <iostream>
using namespace std;

int main()
{
	int begInv, sold, store1, store2;

	cout << "One week ago, 2 new widget stores opened\n";
	cout << "at the same time with the same beginning\n";
	cout << "inventory. What was the beginning inventory?\n";
	cin >> begInv;

	store1 = store2 = begInv;

	cout << "How many widgets has store 1 sold?\n";
	cin >> sold;
	//store1 -= sold;
	store1 = store1 - sold;

	cout << "How many widgets has store 2 sold?\n";
	cin >> sold;
	//store2 -= sold;
	store2 = store2 - sold;

	cout << "\nThe current inventory of each store:\n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;
	return 0;
}