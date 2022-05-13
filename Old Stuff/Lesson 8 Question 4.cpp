#include <iostream>
using namespace std;

int scoreAvg(int *scores);
int *asendingOrder(int *scores, int *size);

int main()
{
	int *scores = nullptr;
	int numOfTests[] = { 0 };

	cout << "This program will accept a give number of test scores and output"
		<< "\nand output the scores in ascending order as well as finding the average." << endl;
	cout << "Please enter the number of test scores: ";
	cin >> *numOfTests;

	if (*numOfTests < 0)
	{
		cout << "Invalid input please enter the number of test scores.";
		cin >> *numOfTests;
	}
	scores = new int[*numOfTests];
	for (int count = 0; count < *numOfTests; count++)
	{
		cout << "Please enter the score for test #" << count + 1 << " : ";
		cin >> *(scores + count);
	}
	
	cout << "The scores in asending order are : ";
		
	for (int count = 0; count < *numOfTests; count++)
		cout << *(asendingOrder(scores, numOfTests) + count);
	//cout << "\nthe average being : " << scoreAvg(scores);
}
int scoreAvg(int *scores)
{
	int total = 0, accumulated = 1;
	for (int count = 0; *(scores + count); count++)
	{
		total += scores[count];
		accumulated++;
	}

	int avg = total / accumulated;
	return avg;
}

int *asendingOrder(int *scores, int *size)
{
	int smallest, position,  *list = nullptr, *iPtr;

	list = new int[*size];

	for (int index = 0; index < *size; index++)
	{
		for (int order = 0; order < *size; order++)
		{
			if (order == 0)
			{
				smallest = *(scores + order);
				position = index;
			}
			else if (smallest > *(scores + order))
			{
				smallest = *(scores + order);
				position = order;
			}		
		}
		*(list + index) = smallest;
		scores[position] = -1;

	}
	return list;
}