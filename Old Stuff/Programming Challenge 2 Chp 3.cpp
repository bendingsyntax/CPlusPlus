/*
Program Author: Daniel De Jesus
Date: 2/1/2020;
Program Function:
This program will ask the user to input the number of tickets sold for each class A, B, C
from 0 to 100,000 tickets becuase the largest stadium seat number is 100,000. This program will then display
the total dollar amount for each set of tickets as well as a grand total of all the tickets sold.
*/
#include <iostream> // input and out put libraries
#include <iomanip> // output manipulation libraries
using namespace std; // using standard naming syntax library

int main() // main function
{
    double totals[] = {0.00,0.00,0.00};
    char x = 'A', tryAgain; // creates two char variables and assigns one the literal 'A' value
    int num[] = {0,0,0}, price[] = {15,12,9}; // creating three integer arrays with predefined values

    cout << "This program will ask to enter the number of tickets per type that are being sold\n" // output to explain the program
         << "then the program will output all total costs for each set and for the added total.\n";

    for(int j = 0; j < 3; j++) //beginning for loop with a integer j in the scope
    {
        start: // creating the start marker for goto commands
        cout << "Please enter the number of tickets for type " << x << " ($" << price[j] << " each): "; //repeating output changing along with the itterations
        cin >> num[j]; // inputting the value and storing in the int array of num at the location of j from the beginning for loop

        if(num[j] < 100001 && num[j] >= 0) // checking to make sure the value is within reasonable range of ticket sales
        {
            totals[j] = price[j] * num[j]; // multiplies the total of number of tickets at location j by the price at location j and storing it in totals at location j
            x++; // increments the char value of x
            if(j == 2) //first nested if statment when j in the beginning for loop is equal to 2 then this will excecute
            {
                x = 'A'; // resets the value of char x to original literal
                for(int i = 0; i < 3; i++) // nested for loop with integer i as the scope
                {
                    if(i == 0) //only during the first itteration does this command excecute
                        cout << "The prices for ticket type:\n"; // output

                    cout << x << ". $" << fixed << setprecision(2) << totals[i] << "\n"; // repeating output changing along with the itterations
                    if(i == 2) // when i from nested for loop is equal to 2 this command will excecute
                    {
                        cout << "Would you like to try again? (Y/N): ";  //outputs a replay prompt for the user
                        cin >> tryAgain; // asks for user input

                        if(tryAgain == 'Y' || tryAgain == 'y') // checks if it is either lower case 'y' or 'Y'
                        {
                            x = 'A'; // resets the char x to original to original literal
                            j = 0; // resets the value of j from the beginning for loop
                            goto start; // goto then jumps to the marker 'start:' on line 23
                        }
                        else // if the user enters anything other than what is in the fifth if statment this command runs
                        {
                            cout << "\nGoodBye!!\n"; //output
                            goto end; //goto command jumps to line 63
                        }
                    }
                    x++; // increments the char value x
                }
            }
        }
        else // if the user enters anything other than what is in the first if statment this command runs
        {
            cout << "The value entered is invalid please try again.\n"; //output
            goto start; // goto command jumps to line 23
        }
    }
    end: // a second marker for the goto command
    return 0; // ends program
}
