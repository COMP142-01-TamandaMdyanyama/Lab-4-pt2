/** \file Lab-4-pt2.cpp
* \brief This file contains a small program with a matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/
#include <iostream>
#include <cassert>
using namespace std;

#include "Matrix.h"

/**
* Shows the menu, user makes a selection.
* <BR>
* @return Returns 0
*/
int main() {

	const int MAX_ROW = 5;
	int choice;
	double mat[MAX_ROW][MAX_COL] = { 0 };

	do {
		cout << "1) Fill with  random numbers " << endl;
		cout << "2) Print Matrix " << endl;
		cout << "8) Exit " << endl;
		cout << " Please enter a choice " << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			break;
		case 2:
			printMatrix(mat, MAX_ROW);
			break;
		case 8:
			break;

		}
	} while (choice != 8);


	return 0;
}

