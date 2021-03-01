#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My12UnitTest1
{
	TEST_CLASS(My12UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 3;
			int** matriz = new int* [n];
			for (int index = 0; index < n; index++)
				matriz[index] = new int[n];
			matriz[0][0] = 9; matriz[0][1] = 1;matriz[0][2] = 2;matriz[1][0] = 3;matriz[1][1] = 4;matriz[1][2] = 5;matriz[2][0] = 6;matriz[2][1] = 7;matriz[2][2] = 8;
			Assert::AreEqual(0, 0);

		}
	};
}
