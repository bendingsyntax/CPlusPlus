#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	int A[SIZE] = { 1,1,1 };

	int B[SIZE];

	cout << "Here are the original numbers in 3-element array A:  ";
	for (int count = 0; count < 3; count++)
		cout << A[count] << "   ";

	cout << "\n\nNow I'm storing 7 numbers in 3-element array B.";
	for (int count = 0; count < 7; count++)
		B[count] = 5;

	cout << "\nIf you see this message, the computer did not crash.";
	cout << "\n\nHere are the 7 numbers in array B  : ";
	for (int count = 0; count < 7; count++)
		cout << B[count] << " ";

	cout << "\nHere are the numbers now in array A:  ";
	for (int count = 0; count < 3; count++)
		cout << A[count] << " ";
	cout << "\n\nArray A's values were overwritten by \n"
		<< "the values that did not fit in Array B.\n";

	return 0;
}