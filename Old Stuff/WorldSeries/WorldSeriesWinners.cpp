#include "WorldSeriesWinners.h"

int main()
{
	vector<string> teams = openFileTeams();
	vector<string> winners = openFileWinners();

	output(teams, winners);

	return 0;
}

vector<string> openFileTeams()
{
	string list;
	vector<string> teamsList;
	ifstream teams;
	teams.open("Teams.txt");

	if (!teams)
		cout << "File could not be openned or found." << endl;

	while (getline(teams, list))
	{
		teamsList.push_back(list);
	}

	return teamsList;
}

vector<string> openFileWinners()
{
	string list;
	vector<string> winnersList;
	ifstream winners;
	winners.open("WorldSeriesWinners.txt");

	if (!winners)
		cout << "File could not be openned or found." << endl;

	while(getline(winners, list))
	{
		winnersList.push_back(list);
	}

	return winnersList;
}

void output(vector<string> teams, vector<string> winners)
{
	int selection;
	int size = teams.size();
	string nameOfTeam;
	cout << "This program will ask for a team and then output how many times\n";
	cout << "that team has won the world series between 1950 and 2014.\n";
	cout << "Please select a team." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ") " << teams[i] << endl;
	}
	cout << "0) Exit." << endl;
	cin >> selection;
	switch (selection)
	{
	case 1: nameOfTeam = teams[0];
		break;
	case 2: nameOfTeam = teams[1];
		break;
	case 3: nameOfTeam = teams[2];
		break;
	case 4: nameOfTeam = teams[3];
		break;
	case 5: nameOfTeam = teams[4];
		break;
	case 6: nameOfTeam = teams[5];
		break;
	case 7: nameOfTeam = teams[6];
		break;
	case 8: nameOfTeam = teams[7];
		break;
	case 9: nameOfTeam = teams[8];
		break;
	case 10: nameOfTeam = teams[9];
		break;
	case 11: nameOfTeam = teams[10];
		break;
	case 12: nameOfTeam = teams[11];
		break;
	case 13: nameOfTeam = teams[12];
		break;
	case 14: nameOfTeam = teams[13];
		break;
	case 15: nameOfTeam = teams[14];
		break;
	case 16: nameOfTeam = teams[15];
		break;
	case 17: nameOfTeam = teams[16];
		break;
	case 18: nameOfTeam = teams[17];
		break;
	case 19: nameOfTeam = teams[18];
		break;
	case 20: nameOfTeam = teams[19];
		break;
	case 21: nameOfTeam = teams[20];
		break;
	case 22: nameOfTeam = teams[21];
		break;
	case 23: nameOfTeam = teams[22];
		break;
	case 24: nameOfTeam = teams[23];
		break;
	case 25: nameOfTeam = teams[24];
		break;
	case 26: nameOfTeam = teams[25];
		break;
	case 27: nameOfTeam = teams[26];
		break;
	case 28: nameOfTeam = teams[27];
		break;
	case 29: nameOfTeam = teams[28];
		break;
	case 0: exit(0);
		break;
	}

	int numberOfWins = selectedWinners(winners, nameOfTeam);

	cout << "\nThe team: " << nameOfTeam << ", have won the World Series: " << numberOfWins << " time(s)." << endl;
	cout << "between the years 1950 to 2014 (not including 1994)." << endl;
}

int selectedWinners(vector<string> w, string selection)
{
	int count = 0, size = w.size();
	string temp;
	vector<string> teamSearch, numOfWins;
	for (int i = 0; i < size; i++)
	{
		if (w[i] == selection)
			count++;
	}
	return count;
}

