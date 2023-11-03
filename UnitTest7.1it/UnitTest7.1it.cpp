#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB7.1IT/LAB7.1IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71it
{
	TEST_CLASS(UnitTest71it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 2;
			const int colCount = 2;
			int S = 0, k = 0;

			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; ++i) {
				a[i] = new int[colCount];
			}

			
			a[0][0] = 2;
			a[0][1] = 3;
			a[1][0] = 4;
			a[1][1] = 6;

			int z = Calc(a, rowCount, colCount, S, k);
			Assert::AreEqual(z, 3);
		}
	};
}
