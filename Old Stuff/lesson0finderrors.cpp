// findErrors.cpp
// / This program has several syntax and logic errors.
// Line 2 missing a second forward slash to make the line a comment. (error 1)
//This program has several syntax and logic errors.

//#include iostream
//line 4 the #include iostream is missing the greater than and less than characters on either end. (error 2)
#include <iostream>
//using namespace std
//Line 5 using namespace std is missing the semi-colon on the end. (error 3)
using namespace std;

//int main
//line 7 int main is missing the open and close parentheses on the end. (error 4)
int main()
{
	//doubl length = 0, // Length of a room in feet
	//Line 9 spelling error for the word double, and used a comma on the end instead of a semi-colon. (error 5 and 6)
	double length = 0;
	//width = 0; // Width of a room in feet
	//line 10 is missing the variable type double. (error 7)
	double width = 0;
	//area == 0; // Area of the room in sq. ft.
	//line 11 is missing variable type and has two equal signs instead of one. (error 8 and 9)
	double area = 0;
	// Get the room dimensions
	//cout << "Enter room length (in feet): "
	//Line 14 missing semi-colon on the end. (error 10)
	cout << "Enter room length (in feet): ";
	cin >> length;

	//cin << "Enter room width (in feet): ";
	//line 17 should be cout not cin. (error 11)
	cout << "Enter room width (in feet): ";
	//cout >> legth;
	//line 18 should be cin not cout and the variable is incorrect it should be width not legth. (error 12 ad 13)
	cin >> width;

	// Compute and display the area
	//width = length + area;
	//line 21 logical error, area is lenght times with. (error 14)
	area = length * width;
	//cout << "The area of the room is " << area " square feet." << endline;
	//line 22 after the area reference the double less than characters are missing, on the end the endline should be endl. (error 15 and 16)
	cout << "The area of the room is " << area << " square feet." << endl;
	//
	//line 23 is missing the ending bracket. (error 18) (functions do not have to have a return value)
}