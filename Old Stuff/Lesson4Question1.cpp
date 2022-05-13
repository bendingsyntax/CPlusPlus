#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double loan,
		rate,
		moInterestRate,
		years,
		balance,
		term,
		payment;
	int numPayments;

	cout << "Loan amount: $";
	cin >> loan;
	cout << "Annual interest rate (entered as decimal): ";
	cin >> rate;
	cout << "Years of loan: ";
	cin >> years;

	numPayments = static_cast<int>(12 * years);
	moInterestRate = rate / 12.0;
	term = pow((1 + moInterestRate), numPayments);
	payment = (loan * moInterestRate * term) / (term - 1.0);

	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly payment: $" << payment << endl;
	cout << endl;
	cout << setw(5) << "Month" << setw(10) << "Interest";
	cout << setw(10) << "Principal" << setw(9) << "Balance" << endl;
	cout << "---------------------------------\n";

	balance = loan;

	for (int month = 1; month <= numPayments; month++)
	{
		double moInterest,
			principal;

		moInterest = moInterestRate * balance;
		if (month != numPayments)
			principal = payment - moInterest;

		else
		{
			principal = balance;
			payment = balance + moInterest;
		}
		balance -= principal;

		cout << setw(4) << month << setw(10) << moInterest;
		cout << setw(10) << principal << setw(10) << balance << endl;
	}
	return 0;
}