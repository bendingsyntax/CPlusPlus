#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

//enum Roster { Tom = 1, Sharon, Bill, Teresa, John };

int main()
{
	/*
	bool trueValue, falseValue;
	int x = 5, y = 10;

	trueValue = (x < y);
	falseValue = (y == x);

	cout << "True is " << trueValue << endl;
	cout << "False is " << falseValue << endl;
	

	int score1, score2, score3;
	double average;

	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	if (average == 100)
	{
		cout << "Congratulations! ";
		cout << "That's a perfect score!\n";
	}

	
	
	int number;

	cout << "Enter an integer and i will tell you if it\n";
	cout << "is odd or even. ";
	cin >> number;

	if (number % 2 == 0)
		cout << number << " is even.\n";
	else
		cout << number << " is odd.\n";
	

	double num1, num2, quotient;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	if (num2 != 0)
	{
		quotient = num1 / num2;
		cout << "The quotient of " << num1 << " divided by "
			<< num2 << " is " << quotient << ".\n";
	}
	else
	{
		cout << "Division by zero is not possible.\n";
		cout << "Please run the program again and enter "
			<< "a number other than zero.\n";
	}
	

	double result = .666667 * 6.0;
	cout << "result = " << result << endl;

	if (result == 4.0)
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;
	


	double result = .666667 * 6.0;

	cout << "result = " << result << endl;

	if (abs(result - 4.0 < .0001))
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;
	

	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60;

	int testScore;
	char grade;

	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	else if (testScore >= MIN_B_SCORE)
		grade = 'B';
	else if (testScore >= MIN_C_SCORE)
		grade = 'C';
	else if (testScore >= MIN_D_SCORE)
		grade = 'D';
	else if (testScore >= 0)
		grade = 'F';

	cout << "Your grade is " << grade << ".\n";
	

	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60,
		MIN_POSSIBLE_SCORE = 0;

	int testScore;
	char grade;
	bool goodScore = true;
	
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	else if (testScore >= MIN_B_SCORE)
		grade = 'B';
	else if (testScore >= MIN_C_SCORE)
		grade = 'C';
	else if (testScore >= MIN_D_SCORE)
		grade = 'D';
	else if (testScore >= MIN_POSSIBLE_SCORE)
		grade = 'F';
	else
		goodScore = false;

	if (goodScore)
		cout << "Your grade is " << grade << ".\n";
	else
		cout << "The score cannot be below zero. \n";

	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;
	int months;
	double charges;

	cout << "   Health Club Membership\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	cout << fixed << showpoint << setprecision(2);

	if (choice == 1)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 3)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "\nThe valid choices are 1 through 4.\n"
			<< "Run the program again and select one of those.\n";
	}
	

	char employed, recentGrad;
	cout << "Answer the following  questions\n";
	cout << "with either Y for Yes or N for No.\n";

	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;

	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "You qualify for the special interest rate.\n";
		}
		else
		{
			cout << "You must have graduated from college in the past\n";
			cout << "two years to qualify for the spacial interest rate.\n";
		}
	}
	else
	{
		cout << "You must be employed to qualify for the "
			<< "special interest rate. \n";
	}
	

	char employed, recentGrad;
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;

	if (employed == 'Y' && recentGrad == 'Y')
		cout << "\nYou qualify for the special interest rate.\n";
	else
	{
		cout << "\nYou must be employed and have graduated from college\n"
			<< "in the past two years to qualify ";
	}
	

	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;

	cout << "What is your annual income? ";
	cin >> income;
	cout << "How many years have you worked at your current job? ";
	cin >> years;
	
	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "\nYou qualify for a loan.\n";
	else
	{
		cout << "You must earn at least $" << MIN_INCOME
			<< " or have been employed \n"
			<< "for more than " << MIN_YEARS << " years "
			<< "to qualify for a loan. \n";
	}
	

	if (!(income >= MIN_INCOME || years > MIN_YEARS))
	{
		cout << "\nYou must earn at least $" << MIN_INCOME
			<< " or have been employed \n"
			<< "for more than " << MIN_YEARS << " years "
			<< "to qualify for a loan. \n";
	}

	else
		cout << "You qualify for a loan.\n";
	

	cout << "Is '?' an alphabetic character?  " << isalpha('?') << "\n";
	cout << "Is 'X' an alphaabetic character?  " << isalpha('X') << "\n";
	cout << "Is 'x' an alphabetic character?  " << isalpha('x') << "\n\n";

	cout << "Ask if(isalpha('x') == true) \n";
	if (isalpha('x') == true)
		cout << "The letter x IS an alphabetic character. \n\n";
	else
		cout << "The letter x is NOT and alphabetic character. \n\n";

	cout << "Ask if(isalpha('x')) \n";
	if (isalpha('x'))
		cout << "The letter x IS and alphabetic character. \n";
	else
		cout << "The letter x is NOT an alphabetic character. \n";
	

	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		MIN_SCORE = 0,
		MAX_SCORE = 100;

	int testScore;
	cout << "Enter your numeric test score and I will\n"
		<< "tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
		if (testScore >= A_SCORE)
			cout << "Your grade is A.\n";
		else if (testScore >= B_SCORE)
			cout << "Your grade is B.\n";
		else if (testScore >= C_SCORE)
			cout << "Your grade is C.\n";
		else if (testScore >= D_SCORE)
			cout << "Your grade is D.\n";
		else
			cout << "Your grade is F.\n";
	}
	else
	{
		cout << "That is an invalid score. Run the program\n"
			<< "again and enter a value in the range of\n"
			<< MIN_SCORE << " through " << MAX_SCORE << ".\n";
	}
	

	const double MIN_INCOME = 35000.0;
	const double MIN_YEARS = 5;

	cout << "What is your annual income? ";

	double income;
	cin >> income;

	if (income >= MIN_INCOME)
	{
		cout << "How many years have you worked at your current job? ";
		int years;
		cin >> years;
		if (years > MIN_YEARS)
			cout << "\nYou qualify.\n";
		else
			cout << "\nYou must have been employed for more than "
			<< MIN_YEARS << " years to qualify.\n";
	}
	else
	{
		cout << "\nYou must ear at least $" << MIN_INCOME << " to qualify.\n";
	}

	int number;
	cout << "Enter a number greater than 0: ";
	cin >> number;

	if (number > 0)
	{
		int number;
		cout << "Now enter another number: ";
		cin >> number;
		cout << "The second number you entered was ";
		cout << number << endl;
	}
	cout << "Your first number was " << number << endl;
	

	char ch;

	cout << "Enter a digit or a letter: ";
	ch = cin.get();

	if (ch >= '0' && ch <= '9')
		cout << "You entered a digit.\n";
	else if (ch >= 'A' && ch <= 'Z')
		cout << "You entered an uppercase letter.\n";
	else if (ch >= 'a' && ch <= 'z')
		cout << "You entered a lowercase letter.\n";
	else
		cout << "That is not a digit or a letter.\n";
	

	const double PRICE_A = 249.00,
				PRICE_B = 199.0;

	string partNum;

	cout << "The headphone item numbers are \n"
		<< "  Noise canceling: item number S-29A \n"
		<< "  Wireless: item number S-29B \n\n"
		<< "Enter the item number of headphones you \n"
		<< "wish to purchase: ";
	cin >> partNum;

	cout << fixed << showpoint << setprecision(2);

	if (partNum == "S-29A" || partNum == "s-29a")
		cout << "The price is $" << PRICE_A << endl;
	else if (partNum == "S-29B" || partNum == "s-29b")
		cout << "The price is $" << PRICE_B << endl;
	else
		cout << partNum << " is not valid part number.\n";
	

	char input;

	cout << "Enter any character: ";
	cin.get(input);

	cout << "The character you entered is: " << input << endl;
	cout << "Its ASCII code is: " << static_cast<int>(input) << endl;

	if (isalpha(input))
		cout << "That's an alphabetic character.\n";
	if (isdigit(input))
		cout << "That's a numeric digit.\n";
	if (islower(input))
		cout << "The letter you entered is lowercase.\n";
	if (isupper(input))
		cout << "The letter you entered is uppercase.\n";
	if (isspace(input))
		cout << "That's a whitespace character.\n";
	
	const double PAY_RATE = 50.0;
	const int MIN_HOURS = 5;

	double hours, charges;

	cout << "How many hours were worked? ";
	cin >> hours;

	hours = hours < MIN_HOURS ? MIN_HOURS : hours;

	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;
	

	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;

	switch (choice)
	{
	case 'A':cout << "You entered A.\n";
			//break;
	case 'B':cout << "You entered B.\n";
			//break;
	case 'C':cout << "You entered C.\n";
			//break;
	default: cout << "You did not enter A, B, or C!\n";
	}
	

	int modelNum;

	cout << "Our TVs come in three models: The 100, 200, and 300.\n";
	cout << "Which do you want? ";
	cin >> modelNum;

	cout << "\nThat model has the following features:\n";

	switch (modelNum)
	{
	case 300: cout << "      Built-in DVR \n";
	case 200: cout << "      1080p high definition picture \n";
	case 100: cout << "      42\" LCD flat screen\n";
		break;
	default: cout << "You can only choose the 100, 200, or 300. \n";

	}
	

	char feedGrade;

	cout << "Our dog food is available in three grades:\n";
	cout << "A, B, and C. Which do you want preicing for? ";
	cin >> feedGrade;

	switch (feedGrade)
	{
	case 'a':
	case 'A': cout << "30 cents per pound.\n";
		break;
	case 'b':
	case 'B': cout << "20 cents per pound.\n";
		break;
	case 'c':
	case 'C': cout << "15 cents per pound.\n";
		break;
	default: cout << "That is an invalid choice.\n";
	}

	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;
	int months;
	double charges;

	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Membership\n"; 
	cout << "4. Quit the program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice >= 1 && choice <= 3)
	{
		cout << "For how many months? ";
		cin >> months;

		switch (choice)
		{
		case 1: charges = months * ADULT_RATE;
			break;
		case 2: charges = months * CHILD_RATE;
			break;
		case 3: charges = months * SENIOR_RATE;
		}
		
		cout << fixed << showpoint << setprecision(2);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of these.\n";
	}
	

	int who;

	cout << "This program will give you a student's birthday.\n";
	cout << "Whose birthday do you want to know?\n";
	cout << "1 = Tom\n";
	cout << "2 = Sharon\n";
	cout << "3 = Bill\n";
	cout << "4 = Teresa\n";
	cout << "5 = John\n";
	cin >> who;

	switch (who)
	{
	case Tom: cout << "\nTom's birthday is January 3.\n";
		break;
	case Sharon: cout << "\nSharon's birthdayf is April 22.\n";
		break;
	case Bill: cout << "\nBill's birthday is December 19.\n";
		break;
	case John: cout << "\nJohn's birthday is June 17.\n";
		break;
	default:
		cout << "\nInvalid selection\n";
	}

	return 0;
	

	const double ADULT_MEAL_COST = 8.25;
	int numAdults, numChildren;
	double adultMealTotal, childMealTotal, totalMealCost;

	cout << "This program calculates total cost "
		<< "for a buffet luncheon.\n";
	cout << "Please enter the number of adult guests (age 12 and over): ";
	cin >> numAdults;
	cout << "\nPlease enter the number of child guests (age 2 - 11): ";
	cin >> numChildren;

	adultMealTotal = numAdults * ADULT_MEAL_COST;
	childMealTotal = .6 * ADULT_MEAL_COST * numChildren;
	totalMealCost = (adultMealTotal + childMealTotal);

	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total buffet cost is : $" << totalMealCost << endl;
	

	const double PRICE_1 = 39.00, PRICE_2 = 69.00, PRICE_3 = 99.00, 
		PRICE_4 = 199.00, PER_TREE_DELIVERY = 20.00, MAX_DELVIERY = 100.00;

	int numOfTrees, height;
	char planted, delivered;
	double treeCost, totalTreeCost, deliveryCost = 0.0, plantingCost = 0.0, totalCost;

	cout << "  Green Fields Landscaping\n"
		<< "  Evergreen Tree Purchase\n\n"
		<< "Please enter the number of trees purchased: ";
	cin >> numOfTrees;
	cout << "\nTree height to the nearest foot: ";
	cin >> height;
	cout << "\nWill Green Fields do the planting?(Y or N):";
	cin >> planted;

	if (!(planted == 'Y' || planted == 'y'))
	{
		cout << "Do you want the trees delivered? (Y or N)";
		cin >> delivered;
	}

	if (height < 3)
		treeCost = PRICE_1;
	else if (height <= 5)
		treeCost = PRICE_2;
	else if (height <= 8)
		treeCost = PRICE_3;
	else
		treeCost = PRICE_4;

	totalTreeCost = numOfTrees * treeCost;

	if ((planted == 'Y') || (planted == 'y'))
		plantingCost = totalTreeCost / 2;
	else if ((delivered == 'Y') || (delivered == 'y'))
		if (numOfTrees <= 5)
			deliveryCost = PER_TREE_DELIVERY * numOfTrees;
		else
			deliveryCost = MAX_DELVIERY;
	
	totalCost = totalTreeCost + plantingCost + deliveryCost;

	cout << fixed << setprecision(2);
	cout << "\n\n         Green Fields Landscaping\n"
		<< "         Evergreen Tree Purchase\n\n"
		<< setw(2) << numOfTrees << " trees @ $" << setw(6) << treeCost
		<< " each =     $" << setw(8) << totalTreeCost << endl;
	cout << " Delivery Charge              $"
		<< setw(8) << deliveryCost << endl;
	cout << " Planting charge              $"
		<< setw(8) << plantingCost << endl;
	cout << "                              _________" << endl;
	cout << " Total Amount Due             $"
		<< setw(8) << totalCost << endl << endl;
	*/
	string career1, career2, career3;
	int randomNum;

	unsigned seed = time(0);
	srand(seed);

	cout << "I am a fortune teller. look into my crystal screen\n"
		<< "and enter 3 careers you would like to have. Example: \n\n"
		<< "       chef\n       astronaut\n       CIA Agent\n\n"
		<< "Then I will predict what you will be. \n\n";
	cout << "Career choice 1: ";
	getline(cin, career1);
	cout << "\nCareer choice 2: ";
	getline(cin, career2);
	cout << "\nCareer choice 3: ";
	getline(cin, career3);

	randomNum = 1 + rand() % 4;

	if (randomNum == 1)
		cout << "\nYou will be a " << career1 << endl;
	else if (randomNum == 2)
		cout << "\nYou will be a " << career2 << endl;
	else if (randomNum == 3)
		cout << "\nYou will be a " << career3 << endl;
	else
		cout << "\nSorry you will not be any of these. \n";

	system("pause");
	return 0;
}