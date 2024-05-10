#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LENOVO T480\source\repos\COMP142-01-TamandaMdyanyama\Lab-4-pt2\Matrix.cpp"
#include "C:\Users\LENOVO T480\source\repos\COMP142-01-TamandaMdyanyama\Lab-4-pt2\Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab4UnitTest
{
	TEST_CLASS(Lab4UnitTest)
	{
	public:
		
		//Test sumOfRows
		TEST_METHOD(TestMethodsumOfRows)
		{
			//Arrage
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2,1,1,1 };
			double* ptrRet;

			//Act
			ptrRet = sumOfRows(matrix, ROW);

			//Assert
			Assert::AreEqual(5.0, ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);
		}
	};
}
