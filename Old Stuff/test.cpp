#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
	Day day1, day2;
	day1 = TUESDAY;
	day2 = static_cast<Day>(day1 + 1);

}