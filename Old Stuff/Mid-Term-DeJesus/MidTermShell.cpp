/*
Mid-Term Project by Daniel De Jesus Mar 2020
this is a current shell of the mid-term project for accessing a large database or large 
file of different kinds of media such as but not limited to Books, Movies, Shows, Comics, 
and etc, this program will allow the input of either one large data base file or multiple 
(note i have not figured out exactly how i will implement the allowing of the user to enter the name 
of the file and or a number to indicate the number of files that will be entered)
last it will output to an html file so its easy to open and search with.
Downloaded the books file from:
https://gist.github.com/jaidevd/23aef12e9bf56c618c41
(Specified the file as .csv instead of txt on download)
*/
#include "ShellHeader.h"

int main()
{
    int iRows = 0, iColumns = 5, index = 0, count = 0, length;
    string sRawFile[index], sLibrary[iRows][iColumns];
    ifstream inFile;
    ofstream libraryhtml;
    
    inFile.open("books.csv");
    if (!inFile) 
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(!inFile.eof())
    {
        getline(inFile, sRawFile[index], ',');
        index++;
    }
    inFile.close();

    length = sizeof(sRawFile);

    for(int row = 0; row < length; row++)
    {
        iRows++;
        for(int column = 0; column < iColumns; column++, count++)
        {
            sLibrary[row][column] = sRawFile[count];
        }
    }

    libraryhtml.open("Library.txt");
    libraryhtml << "<!DOCTYPE html>" << endl << "<html>" << endl << "<body>" << endl
                << "<h1 align=\"center\">Books Library</h1>" << endl
                << "<table style=\"width:100%\">" << endl
                << "<tr>" << endl;

    for(int row = 0; row < iRows; row++)
    {
        for(int column = 0; column < iColumns; column++)
        {
            libraryhtml << "<th>" << sLibrary[row][column] << "</th>" << endl;
        }
        libraryhtml << "</tr>" << endl;
        libraryhtml << "<tr>" << endl;
    }

    libraryhtml << "</table>" << endl
          << "</body>" << endl
          << "</html>" << endl;

    libraryhtml.close();
    return 0;
}
