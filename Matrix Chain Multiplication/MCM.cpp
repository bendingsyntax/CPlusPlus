#include <iostream>
#include <climits>
using namespace std;
#define MAX 10
int lookup[MAX][MAX];

int MatrixChainMx(int dims[], int i, int j)
{
	if (j <= i + 1)
		return 0;

	int min = INT_MAX;
	if (lookup[i][j] == 0)
	{
		for (int k = i + 1; k <= j - 1; k++)
		{
			int cost = MatrixChainMx(dims, i, k);
			cost += MatrixChainMx(dims, k, j);
			cost += dims[i] * dims[k] * dims[j];

			if (cost < min)
				min = cost;
		}
		lookup[i][j] = min;
	}
	return lookup[i][j];
}

int main()
{
	// Matrix A is 10 x 30, B is 30 x 5, and C is 5 x 60
	// (A*B)*C = A*(B*C) = (A*C)*B
	int dims[] = { 10, 30, 5, 60 };
	int n = sizeof(dims) / sizeof(dims[0]);
	cout << "Minimum number of steps is : " << MatrixChainMx(dims, 0, n - 1) << endl;

	system("pause");
	return 0;
}