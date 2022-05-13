#include <iostream>
#include <string>
using namespace std;

int main()
{
	string planets[] = { "Mercury", "Venus", "Earth", "Mars",
						"Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
	
	cout << "Here are the planets:\n";

	for (string val : planets)
		cout << val << endl;

	return 0;
}