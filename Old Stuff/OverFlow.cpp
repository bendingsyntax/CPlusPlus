#include <iostream>
using namespace std;

int main()
{
	//short intVar = 32767;
	int intVar = 32767;
	//float floatVar = 3.0E-47;
	double floatVar = 3.0E-47;

	cout << "Original value of intVar    " << intVar << endl;

	intVar = intVar + 1;

	cout << "intVar afer overflow       " << intVar << endl;

	intVar = intVar + 2;

	cout << "intVar after 2nd overflow  " << intVar << endl;

	cout << "Value of very tiny floatVar " << floatVar << endl;

	return 0;
}