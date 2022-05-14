/*
Program Author: Daniel De Jesus
Date: 2/6/2020;
Program Function:
This program will only accept two of the following three colors red, blue, and yellow.
Next the program will add them as if they were two numbers to display a secondary color from 
the two colors mixed.
*/
#include <iostream> //input and output libraries
#include <string> //string libraries
#include <locale> // locale library for output or input maninpulation
using namespace std; // using standard syntax libraries 

int main() // main function
{
    char tryAgain; // creates char varable tryAgain
    locale lUpper; //creates an object of the locale family to act as a temp storage while converting input
    string sPrimary[] = {"RED", "BLUE", "YELLOW"}, firstColor, secondColor; //creates a string array with the primary colors and then two string variables.

    cout << "This program will accept two of the following three colors:\n"
         << "Red, Blue, Yellow. It will then display the mixture of the two\n"
         << "colors as a secondary color.\n"; //output 
    start: //goto marker
    cout << "Please enter the first color: "; // output 
    getline(cin, firstColor); // gets the entire next line entered from input

    cout << "and the second color: "; //output
    getline(cin, secondColor); //gets the entire next line entered from input

    for(int i = 0; i <= firstColor.length(); i++) //for loop with integer i as scope accumulator
        firstColor[i] = toupper(firstColor[i],lUpper); // for each leter in the string it will capatalize it and store it back in the same position.
    for(int j = 0; j <= secondColor.length(); j++) //for loop with integer j as scope accumulator
        secondColor[j] = toupper(secondColor[j],lUpper); // for each leter in the string it will capatalize it and store it back in the same position.

    /* the next series of if else if statements are to check cover each possible combination of correct colors
       it will then output the colors entered again and then the secondary color also if they are the same color. 
       the last else will assume that all other inputs are invalid and execute.*/
    if((firstColor == "RED" && secondColor == "BLUE") || (firstColor == "BLUE" && secondColor == "RED")) 
    {
        cout << "\nWhen " << firstColor << " and " << secondColor << " are mixed the secondary color PURPLE is made.\n"; 
    }
    else if((firstColor == "RED" && secondColor == "YELLOW") || (firstColor == "YELLOW" && secondColor == "RED"))
    {
        cout << "\nWhen " << firstColor << " and " << secondColor << " are mixed the secondary color ORANGE is made.\n"; 
    }
    else if((firstColor == "BLUE" && secondColor == "YELLOW") || (firstColor == "YELLOW" && secondColor == "BLUE"))
    {
        cout << "\nWhen " << firstColor << " and " << secondColor << " are mixed the secondary color GREEN is made.\n";
    }
    else if (firstColor == secondColor)
    {
        cout << "\nWhen " << firstColor << " and " << secondColor << " are mixed the color stays " << firstColor << "." << endl;
    }
    else
    {
        cout << "Either one or both of the colors selected are invalid.\n";
        cout << "\nwould you like to try again? (Y/N): ";  //outputs a replay prompt for the user
        cin >> tryAgain; // asks for user input

        if(tryAgain == 'Y' || tryAgain == 'y') // checks if it is either lower case 'y' or 'Y'
        {
            cin.ignore(); // clears the cin buffer
            goto start; // goto then jumps to the marker 'start:' on line 23
        }
        else // if the user enters anything other than what is in the if statment this command runs
        {
            cout << "\nGoodBye!!\n"; //output
            goto end; //goto command jumps to line 71
        }
    }
    end: // goto marker
    return 0; //end program.
}