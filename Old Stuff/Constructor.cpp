#include <iostream>
using namespace std;

class Demo
{
public:
	Demo();
	~Demo();
	/*{
		cout << "Now the constructor is running.\n";
	}*/
};

Demo::Demo()
{
	cout << "An object has just been defined, so the constructor"
		<< " is running.\n";
}

Demo::~Demo()
{
	cout << "Now the destructor is running.\n";
}

int main()
{
	/*cout << "This is displayed before the object is created.\n";

	Demo demoObj;

	cout << "This is displayed after the object is created.\n";
	return 0;*/

	Demo demoObj;

	cout << "The object now exists, but is about to be destroyed.\n";
	return 0;
}