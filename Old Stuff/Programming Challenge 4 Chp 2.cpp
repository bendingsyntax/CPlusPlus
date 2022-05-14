/*
Program Author: Daniel De Jesus
Date: 1/28/2020;
Program Function:
This program is to calculate the and and tip for bills
with a constant 15% tip after calculating the tax of 6.75% and 
adding to the total.
*/
#include <iostream> //includes input and output to screen
#include <iomanip> // includes the output manupilation libraries
#include <exception> // includes the try throw and catch libraries for error checking
using namespace std; //includes common syntax libraries

void errCheck(double price); // void function prototype
double inputMenu(double price); // double function prototype

int main() // main function
{
    double price; //creates price as a double
    price = inputMenu(price); // runs the inputMenu double function and passes the value of price to it and then the return value is saved as price.
    errCheck(price); // runs the errCheck void function and passes the value of price to it.

    return 0; // returns 0
}

double inputMenu(double price) // defenition of inputMenu function.
{
    cout << "This Program will Calculate the total with Tax of 6.75%\n";
    cout << "and a tip of 15%." << endl; 
    cout << "Please enter the total price rounded to the second digit.\nPrice: "; // all the output is to discribe the program and ask for input
    cin >> price; // asking for input
    cout << "\n"; // add for spacing.

    return price; // returns price.
}

void errCheck(double price) // defenition of void function errCheck
{
    double taxedTotal, total, tipRate = .15, taxRate = .0675; //creates four double variables.

    try // this will try to excecute the following commands if an error occurs it will go to catch
    {
        if (price > 1e+9 || price == 0) // checks to make sure the input is a number assuming a single customer is not going to spend 1 billion dollars.
        {
            char y = 'f'; // creates a char variable with a random hard coded value that is only for error checking.
            throw y; // thows the value of y to its designated catch.
        }
        else // if the input is a number this command is done
        {
            double x = price;   // creates a temp double to store price
            throw x; // throws the value of x to its designated catch.
        }
    }

    catch(double x) // if the thrown value is a double this catch is selected
    {
        taxedTotal = (price * taxRate) + price; //finds the amount of tax and stores it
        cout << "Total price with tax is: $" << fixed << setprecision(2) << taxedTotal << endl; // outputs the taxed amount
        total = (taxedTotal * tipRate) + taxedTotal;// finds the total price with tip
        cout << "Total price with tax and tip is: $" << fixed << setprecision(2) << total << endl;// outputs the total amount.        
    }

    catch(char y) // if the thrown value is a char this catch is selected
    {
        price = NULL; // sets price to null value
        cout << "The price you entered was invalid please try again." << endl; //informs the user that an input was invalid.
        cout << endl; // added for spacing.
        inputMenu(price); // re-runs double function inputMenu to restart the input.         
    }
}