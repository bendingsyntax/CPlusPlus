#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "This program will display both Kilometer Per Hour (KPH)\n"
		<< "and its converted speed in Miles Per Hour (MPH). \n" << endl;
	cout << setw(5) << "-KPH-" << setw(10) << "-MPH-" << endl;

	for (int KPH = 40; KPH <= 120; KPH += 10)
	{
		double MPH = KPH * .6214;

		cout << setw(5) << KPH << setw(10) << MPH << endl;
	}
}