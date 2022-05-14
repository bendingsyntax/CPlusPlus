/*
Program Author: Daniel De Jesus
Date: 2/19/2020;
Program Function:
This program will calculate the growth of a mountain for the next 25 years at a rate of 
3.1 millimeters per yer and then display each each and the total growth.
*/
#include <iostream> // includes standard libraries
using namespace std;

int main() // main function
{
    const double RATE = 3.1; // millimeters
    const int YEARS = 25;
    double total = 0;

    cout << "starting at zero and increasing at a rate of " << RATE << "millimeters per year." << endl; // explains program
    for(int i = 0; i < YEARS; i++)
    {
        cout << "For year: " << (i + 1) << ", the sea level has increated a total of " << total << " millimeters.\n"; // output
        total += RATE; //rate added to total each itteration.
    }
    return 0; // end
}