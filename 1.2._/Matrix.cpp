#include "Matrix.h"
#include <iomanip>
#include <time.h>
#include <iostream>
using namespace std;
void Matrix::Create(int** a, const int n, const int Low, const int High)

{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Matrix::Read(int** a, const int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
void Matrix::Input(int** a, const int Low, const int High)
{
	for (int i = 0; i < Low; i++)
	{
		for (int j = 0; j < High; j++)
		{
			cout << "" << i << "" << j << "";
			cin >> a[i][j];
		}
		cout << endl;
	}
}

