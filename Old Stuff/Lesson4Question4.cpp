#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int length, width;

	cout << "This program will accept two integers  between 2 and 10\n"
		<< "and then will make a rectangle made of 'X's";

	cout << endl;
	cout << "Please enter the length: ";
	cin >> length;
	cout << "Please enter the width: ";
	cin >> width;
	cout << endl;

	for (int down = 0, left = 0; (left < width && down < length) || down < length; left++)
	{
		if (left < width )
			cout << "X";
		
		if (left == width)
		{
			cout << endl;
			left = 0;
			down++;
		}
	}
	return 0;
}