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
		
		//Test findMax
		TEST_METHOD(TestMethod_findMax)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2,1,1,1 };
			double max;
			
		
			//Act
			max = findMax(matrix, ROW);
		
			//Assert
			Assert::AreEqual(2.0, max);
			Assert::AreNotEqual(-1.0, max);
		
		}
		
		//Test sumAll
		TEST_METHOD(TestMethod_sumAll)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 1,1,1,1 };
			double sum;
		
			//Act
			sum = sumAll(matrix, ROW);
		
			//Assert
			Assert::AreNotEqual(2.0, sum);
			Assert::AreEqual(4.0, sum);
		}
	};
}
