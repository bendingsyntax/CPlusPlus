// This program displays integer numbers and their squares, beginning
// with one and ending with whatever number the user requests.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{       
	// Counter telling what number to square
	int lastNum;    // The final integer value to be squared

	// Get and validate the last number in the table
	cout << "This program will display a table of integer\n"
		<< "numbers and their squares, starting with 1.\n"
		<< "What should the last number be?\n";
		 //<< "Enter an integer less than 2 or greater 10: ";	

	do
	{
		cout << "Please enter an integer less than 2 or greater 10: ";
		cin >> lastNum;
	} while ((lastNum > 2) && (lastNum < 10));
	
	/*while ((lastNum > 2) && (lastNum < 10))
	{  cout << "Please enter an integer less than 2 or greater 10: ";
	   cin  >> lastNum;
	} */
	// Display the table
	cout << "\nNumber  Square\n";
	cout << "--------------\n";	
	
	for (int num = lastNum; num >= 1; num--)
	{
		cout << setw(4) << num << setw(7) << (num * num) << endl;
	}

	/*num = lastNum;          // Set the counter to the starting value
	while (num >= 1)
	{
	   cout << setw(4) << num  << setw(7) << (num * num) << endl;
	   num--;        // Increment the counter
	}*/
	return 0;
}
