#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class CodeMaker
{
private:
	int size;
	char codeChar[94];

	int findIt(char[], int, char);
public:
	CodeMaker();
	string encode(string);
	string decode(string);
};

CodeMaker::CodeMaker()
{
	size = 94;
	ifstream inputFile;
	inputFile.open("code.dat");

	for (int ascii = 32; ascii < 127; ascii++)
		inputFile >> codeChar[ascii - 32];
	inputFile.close();
}

string CodeMaker::encode(string s)
{
	int ascii;
	char newChar;
	string newString = ""; 

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		ascii = s[pos];

		newChar = codeChar[ascii - 32];

		newString += newChar;
	}
	return newString;
}

string CodeMaker::decode(string s)
{
	int index;
	char nextChar;
	char originalChar;
	string decodedText = "";

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		nextChar = s[pos];

		index = findIt(codeChar, size, nextChar);

		originalChar = index + 32;

		decodedText += originalChar;
	}
	return decodedText;
}

int CodeMaker::findIt(char A[], int size, char value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (A[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

int main()
{
	string originalText, secretCode, finalText;
	CodeMaker myCoder;

	cout << "Enter the message to be encoded.\n";
	getline(cin, originalText);

	secretCode = myCoder.encode(originalText);
	cout << "\nHere is the encoded message\n" << secretCode << endl;

	finalText = myCoder.decode(secretCode);
	cout << "\nHere is the decoded message\n" << finalText << endl;

	return 0;
}
