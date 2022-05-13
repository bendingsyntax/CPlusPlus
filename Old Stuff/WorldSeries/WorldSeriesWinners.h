#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> openFileTeams();
vector<string> openFileWinners();
int selectedWinners(vector<string> w, string selection);
void output(vector<string> teams, vector<string> winners);
