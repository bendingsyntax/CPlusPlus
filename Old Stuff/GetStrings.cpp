#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;
	int age;

	cout << "Please enter your name: ";
	//cin >> name;
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;
	cin.get();
	cout << "enter the city you live in: ";
	//cin >> city;
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;

	cout << "Press the Enter key to continue...";
	cin.get();

	return 0;
}