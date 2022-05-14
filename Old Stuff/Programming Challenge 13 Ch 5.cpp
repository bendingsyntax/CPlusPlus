/*
Program Author: Daniel De Jesus
Date: 2/19/2020;
Program Function:
This program will choose a number at random and then have the user try and guess the number
if the guess is not correct and lower the program will output TOO COLD and when higher than 
the correct number will output TOO HOT and after the number is correctly guessed it will 
output how many attempts were made.
*/
#include <iostream> // standard libraries
#include <ctime>
using namespace std;

int main() // main function
{
    int randoNumbo, guess = -1, count = 0; // initalizing and assigning values to variables
    srand(time(NULL)); // seeding random function.
    randoNumbo = rand() % 100 + 1;

    while(guess != randoNumbo) // while the guess it not correct.
    {
        cout << "Try and guess my number!\n"; // output
        cin >> guess; //input
        if(guess == randoNumbo) //if correct
        {
            cout << "You guessed it!! YAY!\n";
            cout << "It only took you " << count << " tries....\n"; //outputs
            cin.ignore(); //clear buffer
            break; // breaks
        }
        else // all incorrect guesses
        {
            count++; // increment
            if(guess > randoNumbo) // if greater than number
                cout << "TOO HOT!!!!!!\n";
            else // if less than
                cout << "TOO COLD!!!!!!!\n";
            cout << "Thats not my number :D try again!\n"; //output
            cin.ignore(); // clear buffer 
        }
    }
    return 0; //end
}