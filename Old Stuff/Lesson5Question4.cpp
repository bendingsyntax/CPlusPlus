#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;

int inOrOut(int &);
void inMenuOutPut(double &, double &, double &, double &);
void outMenuOutPut(double &, double &);
double inMenu(int &), outMenu(int &);
bool validate(double &, int &);

int main()
{
	int count = 0, patient, total;

	patient = inOrOut(count);
	if (patient == 1)
		total = inMenu(count);
	else
		total = outMenu(count);
}

int inOrOut(int &count)
{
	double patient;
	system("cls");
	cout << "Was the patient admitted inPatient or outPatient?\n"
		<< "1. inPatient\n2. outPatient\nChoice: ";
	cin >> patient;
	if ((validate(patient, count) && patient == 1) || (validate(patient, count) && patient == 2))
	{
		count++;
		return patient;
	}
}

double inMenu(int &count)
{
	double days, rate, totalCharges, meds, totalCost;

	cout << "Please enter the number of days the patient stayed: ";
	cin >> days;
	if (validate(days, count))
	{
		cout << "\nThe Cost Per Day: $";
		cin >> rate;
		if (validate(rate, count))
		{
			cout << "\nTotal service charges: $";
			cin >> totalCharges;
			if (validate(totalCharges, count))
			{
				cout << "\nMedication Charges: $";
				cin >> meds;
				if (validate(meds, count))
				{
					totalCost = ((days * rate) + totalCharges + meds);
					inMenuOutPut(days, rate, totalCharges, meds);
				}
			}

		}

	}
	return totalCost;
}

void inMenuOutPut(double &days, double &rate, double &totalCharges, double &meds)
{

	cout << "Total Medical Bill\n\n";
	cout << "Cost for days stayed: $" << (days * rate) << endl;
	cout << "	# of days: " << days << endl;
	cout << "	per day: $" << rate << endl;
	cout << "Hospital service charges: $" << totalCharges << endl;
	cout << "Medication charges: $" << meds << endl;
	cout << "____________________________________" << endl;
	cout << "Total: $" << ((days * rate) + totalCharges + meds) << endl;

	ofstream outputFile ("MedicalBill.txt");
	if (outputFile.is_open())
	{
		outputFile << "Total Medical Bill\n\n";
		outputFile << "Cost for days stayed: $" << (days * rate) << endl;
		outputFile << "	# of days: " << days << endl;
		outputFile << "	per day: $" << rate << endl;
		outputFile << "Hospital service charges: $" << totalCharges << endl;
		outputFile << "Medication charges: $" << meds << endl;
		outputFile << "____________________________________" << endl;
		outputFile << "Total: $" << ((days * rate) + totalCharges + meds);
		outputFile.close();
	}
}

double outMenu(int &count)
{
	double totalCharges, meds, totalCost;
	cout << "Please enter the total service charges: $";
	cin >> totalCharges;
	if (validate(totalCharges, count))
	{
		cout << "Medication charges: $";
		cin >> meds;
		if (validate(meds, count))
		{
			totalCost = totalCharges + meds;
			outMenuOutPut(totalCharges, meds);
		}
	}
	return totalCost;
}

void outMenuOutPut(double &totalCharges, double &meds)
{

	cout << "Total Medical Bill\n\n";
	cout << "Hospital service charges: " << totalCharges << endl;
	cout << "Medication charges: " << meds << endl;
	cout << "____________________________________" << endl;
	cout << "Total: $" << (totalCharges + meds) << endl;

	ofstream outputFile("MedicalBill.txt");
	if (outputFile.is_open())
	{
		outputFile << "Total Medical Bill\n\n";
		outputFile << "Hospital service charges: " << totalCharges << endl;
		outputFile << "Medication charges: " << meds << endl;
		outputFile << "____________________________________" << endl;
		outputFile << "Total: $" << (totalCharges + meds);
		outputFile.close();
	}
}

bool validate(double &x, int &count)
{
	if (x > 0)
		return true;
	else
	{
		cout << "Invalid input try again please.";
		switch (count)
		{
		case 0:inOrOut(count);
			break;
		case 1:inMenu(count);
			break;
		case 2:outMenu(count);
			break;
		default:
			break;
		}
	}	
}