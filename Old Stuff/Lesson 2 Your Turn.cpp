#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double degrees, radians;

	cout << "Enter an angle in degrees and I will convert it\n";
	cout << "to radians for you: ";
	cin >> degrees;
	radians = degrees * PI / 180;

	cout << left << fixed << setw(7) << setprecision(4);
	cout << "The angle in radians is: " << radians << endl;

	cout << "Press Enter to continue...";
	cin.get();

	return 0;
}