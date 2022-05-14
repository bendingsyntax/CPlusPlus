#include "headertest.h"

void getName();
void readFile();

int main()
{
    getName();

    readFile();

    return 0;
}

void getName()
{
    string name;

    cout << "please enter your name\n::" << endl;
    cin >> name;
    int size = name.length();

    for(int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "your name is spelt: " << endl;
        }
        cout << name[i] << "   ";
    }
}

void readFile()
{
    ifstream inFile;
    inFile.open("readtester.txt");
    
    while(inFile)
    cout << inFile;

}