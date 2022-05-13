// This program attempts to average 2 test scores for each
// student in a class. However, it contains logic errors.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	string name;                 // Student first name
	       
	int    count = 1;            // Student counter                 
	double  score,                // An individual score read in
	       totalScore = 0;       // Total of a student's 2 scores
	double average;              // Average of a student's 2 scores

	cout << fixed << showpoint << setprecision(1);
	cout << "Enter the first name of student " << count
	     << " (or Q to quit): ";
	cin  >> name;       
	
	while (name != "Q" && name != "q")
	{	
	   // Get and validate the first score
	   cout << "Enter score 1: ";
	   cin  >> score;
	   if (score <= -.1 || score >= 100.1)
	   {  cout << "Score must be between 0 and 100. Please reenter: ";
	      cin  >> score;
		  if (score <= -.1 || score >= 100.1)
		  {
			  cout << "Score must be between 0 and 100. Please reenter: ";
			  cin >> score;
			  if (score <= -.1 || score >= 100.1)
			  {
				  cout << "Score must be between 0 and 100. Please reenter: ";
				  cin >> score;
				  if (score <= -.1 || score >= 100.1)
				  {
					  cout << "Too many invalid attemps have been made please"
						  << " restart the program";
					  return 0;
				  }
			  }
		  }
	   }
	   totalScore += score;      // Add the first score onto the total

	   // Get and validate the second score
	   cout << "Enter score 2: ";
	   cin  >> score;
	   if (score <= -.1 || score >= 100.1)
	   {
		   cout << "Score must be between 0 and 100. Please reenter: ";
		   cin >> score;
		   if (score <= -.1 || score >= 100.1)
		   {
			   cout << "Score must be between 0 and 100. Please reenter: ";
			   cin >> score;
			   if (score <= -.1 || score >= 100.1)
			   {
				   cout << "Score must be between 0 and 100. Please reenter: ";
				   cin >> score;
				   if (score <= -.1 || score >= 100.1)
				   {
					   cout << "Too many invalid attemps have been made please"
						   << " restart the program";
					   return 0;
				   }
			   }
		   }
	   }
	   totalScore += score;     // Add the second score onto the total

	   // Calculate and print average
	   average = totalScore / 2;
	   cout << name << setw(6) << average << endl;

	   // Get the next student name
	   count++;
	   cout << "Enter the first name of student " << count
	        << " (or Q to quit): ";
	   cin  >> name;
	   totalScore = 0;
	}
	return 0;
}
