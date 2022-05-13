#include <iostream>
#include <unordered_map>
#include <climits>
#include <string>
#include <time.h>
#include <cmath>
using namespace std;

unordered_map<string, int> lookup;

int KSP(int itemValues[], int itemWeights[], int uniqueItems, int KSCapacity)
{
	if(KSCapacity < 0)
		return INT_MIN;

	if (uniqueItems < 0 || KSCapacity == 0)
		return 0;

	string key = to_string(uniqueItems) + "|" + to_string(KSCapacity);

	if (lookup.find(key) == lookup.end())
	{
		int include = itemValues[uniqueItems] + KSP(itemValues, itemWeights, uniqueItems - 1, KSCapacity - itemWeights[uniqueItems]);
		int exclude = KSP(itemValues, itemWeights, uniqueItems - 1, KSCapacity);
		lookup[key] = max(include, exclude);
	}
	return lookup[key];
}

int main()
{
	time_t nTime;
	srand((unsigned)time(&nTime));
	int KSCapacity = 50;
	int* itemValues = new int[KSCapacity];
	int* itemWeights = new int[KSCapacity];
	int	uniqueItems = (KSCapacity / 4);
	
	for (int i = 0; i < KSCapacity; i++)
	{
		itemValues[i] = rand() % 50 + 1;
		itemWeights[i] = rand() % 12 + 1;
	}

	cout << "The Knapsack Value for each item and there weight is as follows : " << endl;

	for (int x = 0; x < KSCapacity; x++)
		cout << "Item #" << x + 1 << ", Value:" << itemValues[x] << ", Weight:" << itemWeights[x] << endl;
	cout << "Number of unique items that can be used: " << uniqueItems << endl;
	cout << "Knapsack value is " << KSP(itemValues, itemWeights, uniqueItems - 1, KSCapacity) << endl;

	system("pause");
	return 0;
}