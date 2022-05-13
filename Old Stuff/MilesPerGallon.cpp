#include <iostream>
using namespace std;

int main()
{
	double totalGallons = 16, tankRange = 350, MPG;

	MPG = tankRange / totalGallons;

	cout << "The car gets " << MPG << " miles to the gallon.\n";
}