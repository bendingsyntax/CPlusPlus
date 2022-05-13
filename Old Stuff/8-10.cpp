#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];

	for (auto &val : numbers)
	{
		cout << "Enter in integer value: ";
		cin >> val;
	}

	cout << "\nHere are the values you entered:\n";

	for (auto val : numbers)
		cout << val << "  ";

	cout << endl;
	return 0;
}