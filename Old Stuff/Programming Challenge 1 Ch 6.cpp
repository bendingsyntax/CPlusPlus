#include <iostream>
#include <iomanip>
using namespace std;

double markup(double price, double percent);

int main()
{
    char choice;
    double price = 0.00, percentage = 0, newPrice = 0.00;
    bool flag = true;

    cout << "This program will ask first for the current wholesale price of the item,\n"
         << "then it will ask for the percentage (Enter a Whole Number), and last\n"
         << "the program will output the original price, the percentage to mark up the price\n"
         << "and then the new price total. (enter 0 to exit program)\n";

    while(flag)
    {
        cout << "Please Enter the current item price: $";
        cin >> price;
        if(price == 0)
        {
            cout << "\nThank you!\n";
            flag = false;
        }
        else if( price > 0 && price < 10000000)
        {
            cout << "Please enter the percentage increase(Whole Number): ";
            cin.ignore();
            cin >> percentage;
            newPrice = markup(price, percentage);
            cout << "\nThe Original Price: $" << fixed << setprecision(2) << price;
            cout << "\nThe percentage to increase the price by: %" << percentage;
            cout << "\nThe New Price: $" << fixed << setprecision(2) << newPrice << endl;
            cout << "Would you like to try again? (Y/N):";
            cin.ignore();
            cin >> choice;
            if(choice == 'y' || choice == 'Y')
                flag = true;
            else
                flag = false;
        }
        else
        {
            cout << "The price you entered is invalid please try again.\n";
            cin.ignore();
            flag = true;
        }
    }
    return 0;
}

double markup(double price, double percent)
{
    double temp;
    percent /= 100;
    temp = price * percent;
    price += temp;
    return price;
}