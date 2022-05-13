#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
	const char MAX_CHOICE = '7';
	Account savings;
	char choice;

	cout << fixed << showpoint << setprecision(2);
	do
	{
		displayMenu();
		choice = getChoice(MAX_CHOICE);
		switch (choice)
		{
		case '1': cout << "The current balance is $";
			cout << savings.getBalance() << endl;
			break;
		case '2': cout << "there have benn ";
			cout << savings.getTransactions()
				<< " transactions.\n";
			break;
		case '3': cout << "Interest earned for thie period: $";
			cout << savings.getInterest() << endl;
			break;
		case '4': makeDeposit(savings);
			break;
		case '5': withdraw(savings);
			break;
		case '6': savings.calcInterest();
			cout << "Interest added.\n";
		}
	} while (choice != '7');
	return 0;
}

void displayMenu()
{
	cout << "\n\n                MENU\n\n";
	cout << "1) Display the account balance\n";
	cout << "2) Display the number of transactions\n";
	cout << "3) Display interest earned for this period\n";
	cout << "4) Make a deposit\n";
	cout << "5) Make withdrawal\n";
	cout << "6) add interest for this period\n";
	cout << "7) Exit the program\n\n";
	cout << "Enter your choice: ";
}

char getChoice(char max)
{
	char choice = cin.get();
	cin.ignore();

	while (choice < '1' || choice > max)
	{
		cout << "Choice must be between 1 and " << max << ". "
			<< "Please re-enter choice: ";
		choice = cin.get();
		cin.ignore();
	}
	return choice;
}

void makeDeposit(Account &account)
{
	double dollars;

	cout << "Enter the amount of the deposit: ";
	cin >> dollars;
	cin.ignore();
	account.makeDeposit(dollars);
}

void withdraw(Account &account)
{
	double dollars;

	cout << "Enter the amount of the withdrawal: ";
	cin >> dollars;
	cin.ignore();
	if (!account.withdraw(dollars))
		cout << "ERROR: Withdrawal amount too larges.\n\n";
}