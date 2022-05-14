#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int **ptrScores, int num);
void calcAverage(int **ptrScores, int num, double avg, int **ptrHiLow);
int findLowest(int **ptrScores, int num, int **ptrHiLow);

int main()
{
    double avg;
    int num = 10,
        scores[num][2]= {0}, *ptrScores[num][2] = {0},
        HiLow[5][2] = {0}, *ptrHiLow[5][2] = {0};

    for(int i = 0; i < 2; i++)
    {
        for(int x = 0; x < num; x++)
        {
            ptrScores[x][i] = &scores[x][i];
            if(x < 5)
                ptrHiLow[x][i] = &HiLow[x][i];
        }
    }
    getScore(*ptrScores, num);
    calcAverage(*ptrScores, num, avg, *ptrHiLow);
    cout << "\nback in main\n";

    cout << "The Top five scores were: ";
    for(int l = 0; l < 5; l++)
        {cout << HiLow[l][0] << " ";}
    cout << "\nThe Lowest five scores were: ";
    for(int p = 0; p < 5; p++)
        {cout << HiLow[p][1] << " ";}
    cout << "\nThe Average was: " << avg << endl;
    return 0;
}

void getScore(int **ptrScores, int num)
{

    for(int j = 0; j < num; j++)
    {   
        nStart:
        cout << "Please enter the score for test #" << (j + 1) << " ";
        cin >> ptrScores[j][0];
        if(ptrScores[j][0] > 100 || ptrScores[j][0] < 0)
        {
            cout << "The value entered was invalid please try again.\n";
            cin.ignore();
            goto nStart;
        }
    }
    for(int x = 0; x < 2; x++)
    {
        cout << "Column :" << x << endl;
        for(int i = 0; i < num; i++)
        {
            cout << ptrScores[i][x];
        }
        cout << endl;
    }
}

void calcAverage(int **ptrScores, int num, double avg, int **ptrHiLow)
{
    int total = 0, highest = ptrScores[0][0], temp, spot = 0, nSpot;
    cout << "\nIn CalcAvg\n";
    for(int k = 0; k < num; k++)
        {total += ptrScores[k][0];}

    avg = total / num;

    /*
    findLowest(ptrScores, num, ptrHiLow);

    do
    {
        for(int index = 1; index < num; index++)
        {
            temp = ptrScores[index][0];
            if (temp > highest)
                {
                    highest = temp;
                    nSpot =  index;
                }
        }
        ptrScores[nSpot] = 0;
        ptrHiLow[spot][0] = highest;
        spot++;
        highest = ptrScores[0][0];
    } while (spot < 4);
    */
}

int findLowest(int **ptrScores, int num, int **ptrHiLow)
{
    int lowest = ptrScores[0][1], temp, spot = 0, nSpot;
    bool change = false;
    cout << "\nIn find lowest\n";
    do
    {
        for(int index = 1; index < num; index++)
        {
            temp = ptrScores[index][1];
            if (temp < lowest)
                {
                    lowest = temp;
                    nSpot = index;
                    change = true;
                }
        }
        if(change != true)
        {
            ptrHiLow[spot][1] = lowest;
            ptrScores[0][1] = 101;
            spot++;
            lowest = ptrScores[0][1]; 
        }
        ptrScores[nSpot][1] = 101;
        ptrHiLow[spot][1] = lowest;
        spot++;
        lowest = ptrScores[0][1];            
    } while (spot < 5);
}