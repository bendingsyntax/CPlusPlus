/*
By Daniel De Jesus, 
*/
#include <iostream>
using namespace std;
int findMode(int *iArray, int size);


int main()
{
	int iArray[30] = { 0 }, size;

	cout << "This program will accept up to 30 integers each representing"
		<< "\nthe average number of pie slices eaten in a individual per year. " << endl;
	for (int noPie = false, count = 0; noPie == false; count++)
	{
		if (count == 0)
			cout << "If less than 30 inputs, enter -1 after the last to end the list." << endl;

		cout << "Please enter the average pieces of pie #" << count + 1 << " : ";
		cin >> *(iArray + count);

		if (*(iArray + count) == -1)
		{
			noPie = true;
			for (int count = 0;*(iArray + count) != 0 && *(iArray + count) != -1; count++)
			{
				size = count;
			}

			cout << "The number of individuals : " << size + 1;
			int mode = findMode(iArray, count);
			cout << endl;
			cout << "The numbers entered are : ";

			for (int num = 0; num <= size; num++)
			{
				cout << *(iArray + num) << " ";
			}
			cout << "\nThe mode of the give set is : " << mode << endl;
		}
	}
}


int findMode(int *iArray, int size)
{
	int repeaters[30] = { 0 }, number, largest, position;
	
	for (int index = 0; index < size; index++)
	{
		number = *(iArray + index);
		for (int count = 0; count < size; count++)
		{
			if (number == *(iArray + count))
				repeaters[index] += 1;
		}
		
		for (int count = 0; count < size; count++)
		{
			if (count == 0)
			{
				largest = *(repeaters + count);
				position = count;
			}
			else if (largest < *(repeaters + count))
			{
				largest = *(repeaters + count);
				position = count;
			}
			else
				continue;
		}
	}
	return *(iArray + position);
}