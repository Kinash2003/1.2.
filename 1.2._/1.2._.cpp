#include <iostream>
#include <time.h>
#include "Matrix.h"
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Matrix g;
	srand((unsigned)time(NULL));
	int Low = -99;
	int High = 99;
	int n;
	cout << "Кількість рядків та кількість стовпців = "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	g.Create(a, n, Low, High);
	g.Read(a, n);
	return 0;
}
