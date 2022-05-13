#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
	/*
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";
	cout << "What is the length of the rectangle? ";
	cin >> length;
	cout << "What is the width of the rectangle? ";
	cin >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	*/
	/*
	int intNumber;
	double floatNumber;

	cout << "Input a number. ";
	cin >> intNumber;
	cout << "Input a second number.\n";
	cin >> floatNumber;
	cout << "You entered ; " << intNumber << " and " << floatNumber << endl;
	*/
	/*
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";
	cout << "separated by a space.\n";
	cin >> length >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	*/
	/*
	int whole;
	double fractional;
	char letter;

	cout << "enter and integer, a double, and a character: ";
	cin >> whole >> fractional >> letter;

	cout << "whole: " << whole << endl;
	cout << "fractional: " << fractional << endl;
	cout << "letter: " << letter << endl;
	*/
	/*
	double numerator, denominator;

	cout << "This program shows the decimal value of a fraction.\n";
	cout << "enter the numerator: ";
	cin >> numerator;
	cout << "Enter the denominator: ";
	cin >> denominator;

	cout << "The decimal value is " << (numerator / denominator) << endl;
	*/
	/*
	double area, radius;

	cout << " This program calculates the area of a circle.\n";
	cout << "What is the radius of the circle? ";
	cin >> radius;

	area = 3.14159265 * pow(radius, 2);
	cout << "The area is " << area << endl;
	*/
	/*
	int books, months;
	double booksPerMonth;

	cout << "How many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	booksPerMonth = static_cast<double>(books) / months;

	cout << "That is " << booksPerMonth << " books per month.\n";
	*/
	/*
	int number = 65;

	cout << number << endl;

	cout << static_cast<char>(number) << endl;
	*/
	/*
	short intVar = 32767;

	float floatVar = 3.0E-47;

	cout << "Original value of intVar     " << intVar << endl;

	intVar = intVar + 1;

	cout << "intVar after overflow        " << intVar << endl;
	intVar = intVar - 1;

	cout << "intVar after 2nd overflow    " << intVar << endl;

	cout << "Value of very tiny floatVar  " << floatVar;
	*/
	/*
	const double PI = 3.14159265;
	double area, radius;
	cout << "What is the radius of the circle? ";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;
	*/
	/*
	int begInv, sold, store1, store2;
	cout << "One week ago, 2 new widget stores opened\n";
	cout << "at the same time with the same beginning inventorty? ";
	cin >> begInv;

	store1 = store2 = begInv;

	cout << "How many widgets has store 1 sold? ";
	cin >> sold;

	store1 -= sold;

	cout << "How mant widgets has store 2 sold? ";
	cin >> sold;
	store2 -= sold;
	
	cout << "\nThe current inventory of each store:\n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;
	*/
	/*	int num1 = 2897, num2 = 5, num3 = 837, num4 = 34, num5 = 7,
	num6 = 1623, num7 = 390, num8 = 3456, num9 = 12;

	cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
	cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
	cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;
	

	int intValue = 3928;
	double doubleValue = 91.5;
	string stringValue = "Jill Q. Jones";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;
	

	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	
	
	double day1, day2, day3, total;

	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;
	cout << "Enter the sales for day 3: ";
	cin >> day3;

	total = day1 + day2 + day3;

	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << fixed << setprecision(2);
	cout << "Day 1: " << setw(8) << day1 << endl;
	cout << "Day 2: " << setw(8) << day2 << endl;
	cout << "Day 3: " << setw(8) << day3 << endl;
	cout << "Total: " << setw(8) << total << endl;
	

	double x = 6.0;

	cout << x << endl;
	cout << showpoint << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << x << endl;
	

	string month1 = "January",
		month2 = "February",
		month3 = "March";

	int days1 = 31, days2 = 28, days3 = 31;

	double high1 = 22.6, high2 = 37.4, high3 = 53.9;

	cout << fixed << showpoint << setprecision(1);
	cout << "Month        Days    High\n";

	cout << left << setw(12) << month1 << right << setw(4) << days1 << setw(9)
		<< high1 << endl;
	cout << left << setw(12) << month2 << right << setw(4) << days2 << setw(9)
		<< high2 << endl;
	cout << left << setw(12) << month3 << right << setw(4) << days3 << setw(9)
		<< high3 << endl;
	

	string name;
	string city;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Enter the city you live in: ";
	cin >> city;

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	

	string name;
	string city;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	

	char ch;
	cout << "Type a character and press Enter: ";
	cin >> ch;
	cout << "You entered " << ch << endl;
	

	char ch;
	cout << "This Program has paused. Press Enter to continue.";
	cin.get(ch);

	cout << "It has paused a second time. Please press Enter again.";
	ch = cin.get();

	cout << "It has paused a third time. Please press Enter again.";
	cin.get();

	cout << "Thank you! \n";
	

	string firstName, lastName, fullName;
	string stars;
	int numStars;

	cout << "Please enter your first name: ";
	getline(cin, firstName);
	cout << "Please enter your last name: ";
	getline(cin, lastName);

	fullName = firstName + " " + lastName;
	numStars = fullName.length();
	stars.assign(numStars, '*');

	cout << endl;
	cout << stars << endl;
	cout << fullName << endl;
	cout << stars << endl;
	

	const int SIZE = 12;
	char name[SIZE];

	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Hello, " << name << endl;
	

	const int SIZE = 12;
	char name1[SIZE], name2[SIZE];

	strcpy(name1, "Sebastian");
	cout << "name1 now holds the string " << name1 << endl;

	strcpy(name2, name1);
	cout << "name2 now also holds the string " << name2 << endl;
	

	const int SIZE = 5;
	char word[SIZE];

	cout << "Enter a word: ";
	cin >> setw(SIZE) >> word;
	cout << "You entered " << word << endl;
	

	const int SIZE = 5;
	char word[SIZE];

	cout << "Enter a word: ";
	cin.width(SIZE);
	cin >> word;
	cout << "You entered " << word << endl;
	

	const int SIZE = 81;
	char sentence[SIZE];

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered " << sentence << endl;
	

	double a, b, c;

	cout << "Enter the length of side a: ";
	cin >> a;
	cout << "Enter the length of side b: ";
	cin >> b;
	
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));

	cout << "The length of the hypotenuse is ";
	cout << c << endl;
	

	cout << rand() << "     ";
	cout << rand() << "     ";
	cout << rand() << endl;
	

	unsigned seed;

	cout << "Enter a seed value: ";
	cin >> seed;

	srand(seed);

	cout << rand() << "     ";
	cout << rand() << "     ";
	cout << rand() << endl;
	

	unsigned seed;

	seed = time(0);
	srand(seed);

	cout << srand << "     ";
	cout << srand << "     ";
	cout << srand << endl;


	double squareFeet;
	int depth;
	double cubicFeet, cubicYards, totalPrice;
	cout << "Number of square feet to be covered with mulch: ";
	cin >> squareFeet;
	cout << "Number of inches deep: ";
	cin >> depth;

	cubicFeet = squareFeet * (depth / 12.0);
	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

	cout << "\n Number of cubic yards needed: " << cubicYards << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Price per cubic yard: $" << setw(7)
		<< PRICE_PER_CUBIC_YD << endl;
	cout << "Total price:       $" << setw(7) << totalPrice << endl << endl;
	*/

	string  s1 = "There once was a person named ",
			s2 = " who lived in ",
			s3 = "\nand who loved ",
			s4 = ". At the age of ",
			s5 = ", ",
			s6 = " graduated \nfrom high school and went to work in a ",
			s7 = " factory.\n",
			s8 = " got married and had ",
			s9 = " children and a pet ",
			s10 = " named ",
			s11 = ".\nEvery weekend the family and ",
			s12 = " had fun ",
			s13 = " together.";
	string name, city, activity, animal, product, petName;
	int age, kids;

	cout << "Enter the following information and I\'ll "
		<< "tell you a story.\n\n";

	cout << "Your name: ";
	getline(cin, name);

	cout << "The name of a city: ";
	getline(cin, city);

	cout << "A Physical activity (e.g. jogging, playing baseball): ";
	getline(cin, activity);

	cout << "An animal: ";
	getline(cin, animal);

	cout << "A food or product you can buy: ";
	getline(cin, product);

	cout << "An adjective noun (e.g. blue car): ";
	getline(cin, petName);

	cout << "A number between 10 and 50: ";
	cin >> age;

	cout << "A number between 0 and 15: ";
	cin >> kids;

	cout << endl << s1 << name << s2 << city << s3 << activity;
	cout << s4 << age << s5 << name << s6 << product << s7;
	cout << name << s8 << kids << s9 << animal << s10 << petName;
	cout << s11 << petName << s12 << activity << s13 << endl;
	system("pause");
	return 0;
}