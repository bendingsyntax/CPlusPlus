#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	int count = 1;

	while (count <= 5)
	{
		cout << "Hello     ";
		count = count + 1;
	}

	cout << "\n\nThat's all!" << endl;
	

	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60,
		MIN_POSSIBLE_SCORE = 0;

	int numStudents,
		student,
		testScore;
	char grade;
	bool goodScore = true;

	cout << "How many students do you have grades for? : ";
	cin >> numStudents;

	student = 1;

	while (student <= numStudents)
	{
		cout << "Enter the numeric test scores for student #"
			<< student << ": ";
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
			cout << "The letter grade is " << grade << ".\n";
		else
			cout << "The score cannot be below zero.\n";

		student = student + 1;
	}
	
	const int MIN_PLAYERS = 9,
		MAX_PLAYERS = 15;

	int players,
		teamSize,
		numTeams,
		leftOver;

	cout << "How many players do you wish per team?\n";
	cout << "(Enter a value in range " << MIN_PLAYERS << " - " << MAX_PLAYERS << "):";
	cin >> teamSize;

	while (teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
	{
		cout << "\nTeam size should be "
			<< MIN_PLAYERS << " to " << MAX_PLAYERS << " players.\n";
		cout << "How many players do you wish per team?\n";
		cin >> teamSize;
	}

	cout << "How many players are available?: ";
	cin >> players;

	while (players <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> players;
	}

	numTeams = players / teamSize;
	leftOver = players % teamSize;

	cout << "\nThere will be " << numTeams << " team with ";
	cout << leftOver << " players left over.\n";
	

	int count = 1;
	while (count < 6)
	{
		cout << count << "    ";
		count++;
	}
	cout << endl;
	count = 5;
	while (count > 0)
	{
		cout << count << "    ";
		count--;
	}
	cout << endl;
	
	int num = 4;

	cout << num << "  ";
	cout << num++ << "  ";
	cout << num << "  ";
	cout << ++num << "  ";
	cout << endl;
	cout << num << "  ";
	cout << num-- << "  ";
	cout << num << "  ";
	cout << --num << "  ";
	cout << endl;
	
	int num = 1;

	cout << "Number Square\n";
	cout << "-------------\n";
	while (num <= 5)
	{
		cout << setw(4) << num << setw(7) << (num * num) << endl;
		num++;
	}
	

	int num, lastNum;

	cout << "This program will display a table of integer \n"
		<< "numbers and their squares, starting with 1.\n"
		<< "What should the last number be?\n"
		<< "Enter a number between 2 and 10 : ";
	cin >> lastNum;

	while (lastNum < 2 || lastNum > 10)
	{
		cout << "Please enter a number between 2 and 10 : ";
		cin >> lastNum;
	}

	cout << "\nNumber  Square\n"
		<< "----------------\n";

	num = 1;
	while (num <= lastNum)
	{
		cout << setw(4) << num << setw(7) << (num * num) << endl;
		num++;
	}

	return 0;
	
	const int NUM_DAYS = 5;
	int day;
	double dailySales,
		   totalSales = 0.0;
		
	day = 1;
	while(day <= NUM_DAYS)
	{
		cout << "Enter the sales for day " << day << ": ";
		cin >> dailySales;
		totalSales = totalSales + dailySales;
		day++;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal sales: $" << totalSales << endl;
	system("pause");
	return 0;
	
	int game = 1,
		points,
		total = 0;

	cout << "Enter the number of points your team earned for each\n";
	cout << "game so far this season. Then enter -1 when finished.\n\n";
	cout << "Enter the points for game " << game << ": ";
	cin >> points;

	while (points != -1)
	{
		total += points;
		game++;
		cout << "Enter the points for game " << game << ": ";
		cin >> points;
	}
	cout << "\nThe team has earned " << total << " points so far. \n";
	system("pause");
	return 0;
	*/
	int score1, score2, score3;
	double average;
	char again;

	do
	{
		cout << "\nEnter 3 scores and i will average them: ";
		cin >> score1 >> score2 >> score3;
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << "\n\n";
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	}while (again == 'Y' || again == 'y');
	//system("pause");
	return 0;
}