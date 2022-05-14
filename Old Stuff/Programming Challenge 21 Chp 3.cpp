/*
Program Author: Daniel De Jesus
Date: 2/1/2020;
Program Function:
This program will ask for three inputs an amount, rate, and number of payments, 
it will then calculate the monthly payments the total amount paid back and the interest 
paid and display each.
*/
#include <iostream>  // input output library
#include <iomanip> // output manipulation library
#include <cmath> // math function library
using namespace std; // using standard syntax library

int main() // main function
{
    double loanAmt, interestRate, interestPaid, monthly, total = 0; // creates five double variables with one being assinged a zero value.
    int numPayments, temp; // creates two integer variables

    cout << "This program will ask for the loan amount, the monthly interest rate\n";
    cout << "and the number of payments and will then calculate the monthly payments,\n";
    cout << "the total amount paid with interest, and the interest paid.\n";
    cout << "Please enter the Loan amount: ";
    cin >> loanAmt;
    cout << "\nPlease enter the interest rate in whole numbers not decimals: ";
    cin >> interestRate;
    cout << "\nLast Please enter the number of monthly payments in whole numbers: ";
    cin >> numPayments;
    // ^^ all the output and input is the menu for the program for explaining the program as well as asking for the needed input.
    temp = interestRate; // holds the value that was input into interestRate to the temp variable
    interestRate = interestRate / 100; // converts the integer to a decimal percentage for calculations
    monthly = loanAmt * ((interestRate*(pow((1+interestRate),numPayments)))/(pow((1+interestRate),numPayments)-1)); // monthly calculcation as per the text book
    for(int i = 0; i < numPayments; i++) // creates a for loop to calculate the total amount paid and storing in the total variable.
        total += monthly; // each itteration adds the total amount to the monthly and stores it back into the total variable.
    
    interestPaid = total - loanAmt; // calculates the interest paid by subtracting the total amount by the inital amount.

    cout << "\nLoan Amount:" << setw(20) << "$" << setw(13) << fixed << setprecision(2) << loanAmt << endl
         << "Monthly Interest Rate:" << setw(10) << "%" << setw(13) << temp << endl
         << "Number of Payments:" << setw(13) << "#" << setw(13) << numPayments << endl
         << "Monthly Payments:" << setw(15) << "$" << setw(13) << fixed << setprecision(2) << monthly << endl
         << "Paid Back:" << setw(22) << "$" << setw(13) << fixed << setprecision(2) << total << endl
         << "Interest Paid:" << setw(18) << "$" << setw(13) << fixed << setprecision(2) << interestPaid << endl;
        // specific formatting from the book but altering the percentage and the number of monthly payments to make it seem more uniform.
    return 0; // return 0 to exit program.
}