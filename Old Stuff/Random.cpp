#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned seed;

	seed = time(0);
	srand(seed);

	cout << rand() % 10 + 1 << "		"; // range from 0 - 9
	cout << rand() % 10 + 10 << "		"; // range from 10 - 19
	cout << rand() % 10 + 20 << endl; // range from 20 - 29


	/*cout << rand() << "		";
	cout << rand() << "		";
	cout << rand() << endl;*/

	cout << endl << "Press the Enter key to continue...";
	cin.get();

	return 0;
}