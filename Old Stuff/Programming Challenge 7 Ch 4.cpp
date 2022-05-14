/*
Program Author: Daniel De Jesus
Date: 2/6/2020;
Program Function:
This program is a time calculator that will request an input of number of seconds from the 
user and then depending on how many seconds it will display the output in days, hours, minutes, and seconds.
*/
#include <iostream> // input and output libraries
#include <string> // string libraries
using namespace std; // using standard syntax library

void timeConvertion(double dSeconds,int *ptrTime, string *ptrUnit, int *ptrstdtimes); // void function prototype;

int main() // main function
{
    char tryAgain; // creates the char variable tryAgain.
    double dSeconds; // creates the double variable dSeconds/
    int stdTimes[] = {24,60,60}, iTime[4], *ptrstdtimes[3], *ptrTime[4]; //creates two arrays and two arrays of pointers
    string sUnit[] = {"day(s)", "hour(s)", "minute(s)", "second(s)"}, *ptrUnit[4]; // creates an array of strings, and an array of pointer strings.

    for(int j = 0; j < 4; j++) //for loop with int j in scope 
    {
        ptrTime[j] = &iTime[j]; //sets each pointer in the integer array to reference the value at that same position in original integer array.
        ptrUnit[j] = &sUnit[j]; //sets each pointer in the string array to reference the value at that same position in original string array.
        if(j < 3)
            ptrstdtimes[j] = &stdTimes[j];//sets each pointer in the integer array to reference the value at that same position in original integer array.
    } // this for loop is so that then we pass along the pointers for each array when changes are made in other functions of the program they also 
      // change in the main function here because we are referencing the value at each positionin the original arrays.

    cout << "This program will ask for a number of seconds and it will convert the number\n"
         << "to days, hours, and minutues depending on the number put in.\n"; // output
    start: // goto marker
    cout << "Please enter the number of seconds to convert: "; //output
    cin >> dSeconds; // requests input from user and stores in dSeconds.

    timeConvertion(dSeconds, *ptrTime, *ptrUnit, *ptrstdtimes); // calls the function timeConvertion and passes along a double and three pointer arrays.

    cout << "\nWould you like to try again? (Y/N): ";  //outputs a replay prompt for the user
    cin >> tryAgain; // asks for user input

    if(tryAgain == 'Y' || tryAgain == 'y') // checks if it is either lower case 'y' or 'Y'
    {
        goto start; // goto then jumps to the marker 'start:' on line 31
    }
    else // if the user enters anything other than what is in the if statment this command runs
    {
        cout << "\nGoodBye!!\n"; //output
        goto end; //goto command jumps to line 50
    }
    end: // goto marker
    return 0; // end program
}

void timeConvertion(double dSeconds,int *ptrTime, string *ptrUnit, int *ptrstdtimes) // definition of void function
{
    if(dSeconds >= 86400) // checks if the seconds the user input are greater than or equal to 86400
    {
        dSeconds /= 86400; // there are 86400 seconds in a day so dividing the number by the 86400 will provide days and any decimals are hours
        for(int fst = 0; fst < 4; fst++)//for loop with integer fst in scope
        {
            ptrTime[fst] = dSeconds; //stores the value of dSeconds into the pointer array at position fst that references the original array in main
            if(fst < 3) // as long as accumulator fst is less than 3 this will execute 
            {
                dSeconds -= ptrTime[fst]; // subtracts the value of dSeconds by the value of ptrTime the array of pointers at position fst in the array
                                          // and then stores the value back into dSeconds. (this will store just the decimals so that we can convert them)
                dSeconds *= ptrstdtimes[fst]; // multiples the value of dSeconds (the decimals from subtracting the whole number in previous command)
                                              // by the value of ptrstdtimes at position fst which is referencing the value at position fst in the stdTimes array.
                                              // which is then stored in dSeconds
            }//this for loop is so that the whole number in any itteration is stored in the correct position as well as being able to take the decimal of that number 
             //,since most will not be a whole number after division, and convert it to the next position and keeps going until the for loop completes.
        }
        for(int i = 0; i < 4; i++) // for loop with integer i in scope
            cout << "The number of " << ptrUnit[i] << ": " << ptrTime[i] << endl; // outputs
    }
    else if (dSeconds < 86400 && dSeconds >= 3600) // checks else if dSeconds is less than 86400 AND equal to or greater than 3600
    {
        dSeconds /= 3600; // divides dSeconds by 3600 to conver to hours with any decimals being minutes
        for(int fst = 1; fst < 4; fst++) // for loop with integer fst starting at 1
        {
            ptrTime[fst] = dSeconds; //set the value for pointer array ptrTime at position fst will store the value dSeconds
            if(fst < 3) // while the accumulator fst is less than three this will execute
            {
                dSeconds -= ptrTime[fst]; // subtracts the value of dSeconds by the value of ptrTime the array of pointers at position fst in the array
                                          // and then stores the value back into dSeconds. (this will store just the decimals so that we can convert them)
                dSeconds *= ptrstdtimes[fst]; // multiples the value of dSeconds (the decimals from subtracting the whole number in previous command)
                                              // by the value of ptrstdtimes at position fst which is referencing the value at position fst in the stdTimes array.
                                              // which is then stored in dSeconds
            }//this for loop is so that the whole number in any itteration is stored in the correct position as well as being able to take the decimal of that number 
             //,since most will not be a whole number after division, and convert it to the next position and keeps going until the for loop completes.      
        }
        for(int i = 1; i < 4; i++) // for loop with integer i starting at 1
            cout << "The number of " << ptrUnit[i] << ": " << ptrTime[i] << endl;//output
    }
    else if (dSeconds < 3600 && dSeconds >= 60) // checks else if dSeconds is less than 3600 AND equal to or greater than 60.
    {
        dSeconds /= 60; // set the value of dSeconds divided by 60 to conver to minutes and any decimals are seconds.
        for(int fst = 2; fst < 4; fst++) // for loop with integer fst starting at 2
        {
            ptrTime[fst] = dSeconds; //set the value for pointer array ptrTime at position fst will store the value dSeconds
            if(fst < 3) // while the accumulator fst is less than three this will execute
            {
                dSeconds -= ptrTime[fst]; // subtracts the value of dSeconds by the value of ptrTime the array of pointers at position fst in the array
                                          // and then stores the value back into dSeconds. (this will store just the decimals so that we can convert them)
                dSeconds *= ptrstdtimes[fst]; // multiples the value of dSeconds (the decimals from subtracting the whole number in previous command)
                                              // by the value of ptrstdtimes at position fst which is referencing the value at position fst in the stdTimes array.
                                              // which is then stored in dSeconds
            }//this for loop is so that the whole number in any itteration is stored in the correct position as well as being able to take the decimal of that number 
             //,since most will not be a whole number after division, and convert it to the next position and keeps going until the for loop completes.      
        }
        for(int i = 2; i < 4; i++) // for loop with integer i starting at 2
            cout << "The number of " << ptrUnit[i] << ": " << ptrTime[i] << endl; //output
    }
    else // if all else this will execute
    {
        ptrTime[3] = dSeconds; // in the pointer array at postion 3 which is referencing the value at integer array iTime in main at position 3, and storing the 
                               // value of dSeconds there.
        for(int i = 3; i < 4; i++) // for loop with integer i starting at 3
            cout << "The number of " << ptrUnit[i] << ": " << ptrTime[i] << endl; //output
    }
}