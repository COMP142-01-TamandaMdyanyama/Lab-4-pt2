/** \file Lab-4-pt2.cpp
* \brief This file contains a small program with a matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/
#include <iostream>
#include <cassert>
#include <ctime>
using namespace std;

//User defined libraries 
#include "Matrix.h"

//temporary function prototypes
//double sumAll(const double mat[][MAX_COL],const int maxRow);
//double average(const double mat[][MAX_COL],const int maxRow);
double findMax(const double mat[][MAX_COL], const int maxRow);



/**
* Shows the menu, user makes a selection.
* <BR>
* @return Returns 0
*/
int main() {
	srand(time(NULL));
	const int MAX_ROW = 5;
	int choice;
	double mat[MAX_ROW][MAX_COL] = { 0 };

	do {
		cout << "\n1) Fill with  random numbers " << endl;
		cout << "2) Print Matrix " << endl;
		cout << "3) Sum a row " << endl;
		cout << "4) Sum a column " << endl;
		cout << "5) Find the maximum value" << endl;
		cout << "6) Calculate average number of matrix " << endl;
		cout << "8) Exit " << endl;
		cout << " Please enter a choice " << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			fillWithRandomNum(mat, MAX_ROW);
			break;
		case 2:
			printMatrix(mat, MAX_ROW);
			break;
		case 3:
			int row;
			cout << "Which row would you like to sum up? (0 based) --->";
			cin >> row;
			cout << "\nSum of row " << row << " is:" << sumOfRow(mat, row, MAX_ROW)<<endl;
			break;
		case 4:
			int col;
			cout << "Which column would you like to sum up? (0 based) --->" ;
			cin >> col;
			cout<< "\nSum of column "<< col << " is:"<< sumOfCol(mat, col, MAX_ROW)<<endl;
			break;
		case 5:
			cout << "\nThe highest value in the matrix is :" << findMax(mat, MAX_ROW) << endl;
		case 8:
			//No code needed
			break;

		}
	} while (choice != 8);


	return 0;
}
  /**
  This function find the highest value in the matrix
 @param mat The matrix
 @param maxRow The number of rows available
 @return max The highest value in the matrix
  */
double findMax(const double mat[][MAX_COL], const int maxRow) {
	double max = mat[0][0];
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (mat[i][j] > max)
				max = mat[i][j];
		}
	}
	return max;
}

