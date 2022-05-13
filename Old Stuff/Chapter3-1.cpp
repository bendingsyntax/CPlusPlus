#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	cout << "This program caculates the area of the rectangle.\n";

	cout << "What is the length of the rectangle? ";
	cin >> length;
	cout << "What is the eidth of the rectangle? ";
	cin >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << endl;

	return 0;
}