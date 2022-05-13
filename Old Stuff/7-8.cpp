#include <iostream>
using namespace std;

class SimpleStat
{
private:
	int largest, sum, count;

	bool isNewLargest(int);

public:
	SimpleStat();
	bool addNumber(int);
	double calcAverage();

	int getLargest()
	{
		return largest;
	}

	int getCount()
	{
		return count;
	}
};

SimpleStat::SimpleStat()
{
	largest = sum = count = 0;
}

bool SimpleStat::addNumber(int num)
{
	bool goodNum = true;
	if (num >= 0)
	{
		sum += num;
		count++;
		if (isNewLargest(num))
			largest = num;
	}
	else
		goodNum = false;

	return goodNum;
}

bool SimpleStat::isNewLargest(int num)
{
	if (num > largest)
		return true;
	else
		return false;
}

double SimpleStat::calcAverage()
{
	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}
int main()
{
	int num;
	SimpleStat statHelper;

	cout << "Please enter the set of non-negative integer \n";
	cout << "value you want to average. Separate them with \n";
	cout << "space and enter -1 after the last value. \n\n";

	cin >> num;
	while (num >= 0)
	{
		statHelper.addNumber(num);
		cin >> num;
	}

	cout << "\nYou entered " << statHelper.getCount() << " values. \n";
	cout << "The largest value was " << statHelper.getLargest() << endl;
	cout << "The average value was " << statHelper.calcAverage() << endl;

	return 0;
}