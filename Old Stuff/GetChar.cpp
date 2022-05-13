#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "Type a character and press Enter: ";
	//cin >> ch;
	cin.get(ch);
	cout << "You entered " << ch << endl;

	cout << endl << "Press the Enter key to continue...";
	cin.get();

	return 0;
}