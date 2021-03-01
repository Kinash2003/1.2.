#pragma once
#include <string>
using namespace std;
class Matrix
{
public:
	void Create(int** a, const int n, const int Low, const int High);
	void Read(int** a, const int n);
	void Input(int** a, const int Low, const int High);
};

