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
		cout << "6) Sum up all values in the matrix " << endl;
		cout << "7) Calculate average number of matrix " << endl;
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
			cout<< "\nSum of column "<< col << " is:"<< sumOfCol(mat, row, MAX_ROW)<<endl;
			break;
		case 5:
			cout << "\nThe highest value in the matrix is :" << findMax(mat, MAX_ROW) << endl;
			break;
		case 6:
			cout << "\nThe sum of the matrix is :" << sumAll(mat, MAX_ROW) << endl;
			break;
		case 7:
			cout << "\nThe average value of the matrix is: " << average(mat, MAX_ROW) << endl;
			break;
		case 8:
			//No code needed
			break;

		}
	} while (choice != 8);

	return 0;
}

//@todo, add logical bugs, only three.