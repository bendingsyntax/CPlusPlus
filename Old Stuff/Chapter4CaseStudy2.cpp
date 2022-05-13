#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PRICE_1 = 39.00,
		PRICE_2 = 69.00,
		PRICE_3 = 99.00,
		PRICE_4 = 199.00;
	const double PER_TREE_DELIVERY = 20.00,
		MAX_DELIVERY = 100.00;
	int numTrees,
		height;
	char planted,
		delivered;
	double treeCost,
		totalTreeCost,
		deliveryCost = 0.0,
		plantingCost = 0.0,
		totalCharges;

	cout << "			Green Fields Landscaping\n"
		<< "			Evergreen Tree Purchase\n\n";
	cout << "Number of trees purchased: ";
	cin >> numTrees;
	cout << "Tree height to the nearest foot: ";
	cin >> height;
	cout << "Will Green Fields do the planting?(Y/N): ";
	cin >> planted;

	if (!(planted == 'Y' || planted == 'y'))
	{
		cout << "Do you want the trees delivered? (Y/N): ";
		cin >> delivered;
	}

	if (height < 3)
		treeCost = PRICE_1;
	else if (height <= 5)
		treeCost = PRICE_2;
	else if (height <= 8)
		treeCost = PRICE_3;
	else
		treeCost = PRICE_4;

	totalTreeCost = numTrees * treeCost;

	if ((planted == 'Y') || (planted == 'y'))
		plantingCost = totalTreeCost / 2;
	else if ((delivered == 'y') || (delivered == 'Y'))
		if (numTrees <= 5)
			deliveryCost = PER_TREE_DELIVERY * numTrees;
		else
			deliveryCost = MAX_DELIVERY;
	totalCharges = totalTreeCost + deliveryCost + plantingCost;

	cout << fixed << showpoint << setprecision(2);
	cout << "\n\n\			Green Fields Landingscape\n"
		<< "			Evergreen Tree Purchase\n\n";
	cout << setw(2) << numTrees << " trees @ $" << setw(6) << treeCost
		<< " each =		$" << setw(8) << totalTreeCost << endl;
	cout << "Delivery charge				$"
		<< setw(8) << deliveryCost << endl;
	cout << "Planting charge				$"
		<< setw(8) << plantingCost << endl;
	cout << "					_________" << endl;
	cout << "Total Amount Due			$"
		<< setw(8) << totalCharges << endl << endl;
	return 0;
}