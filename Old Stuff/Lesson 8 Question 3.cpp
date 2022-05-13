#include <iostream>
#include <ctime>
#include <time.h>
#include <string>
using namespace std;

int main()
{
	time_t epSeconds;
	tm *pCalendarTime = nullptr;

	string wDay[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
					"Thursday", "Friday", "Saturday" };
	string month[] = { "January", "February", "March", "April",
					"May", "June", "July""August", "September",
					"October", "November", "December" };
	epSeconds = time(NULL);
	pCalendarTime = localtime(&epSeconds); 

	cout << "Today is " << wDay[pCalendarTime->tm_wday]
		<< " " << month[pCalendarTime->tm_mon]
		<< " " << pCalendarTime->tm_mday
		<< ", " << 1900 + pCalendarTime->tm_year << endl;
	return 0;
}