#include <iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];

	cout << "Enter the hours worked by " << NUM_EMPLOYEES
		<< " employees: ";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
		cin >> hours[i];

	cout << "The hours you entered are: ";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
		cout << " " << hours[i];
	cout << endl;
}