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
//double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);



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
		cout << "3) sum a row " << endl;
		cout << "4) sum a column " << endl;
		cout << "5) transpose matrix " << endl;
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
			break;
		case 4:
			int col;
			cout << "Which column would you like to sum up? (0 based) --->" ;
			cin >> col;
			cout<< "\nSum of column "<< col << " is:"<< sumOfCol(mat, col, MAX_ROW);
			break;
		case 8:
			break;

		}
	} while (choice != 8);


	return 0;
}

