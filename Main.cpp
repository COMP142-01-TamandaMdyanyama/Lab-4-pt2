/** \file Lab-4-pt2.cpp
* \brief This file contains a small program with a matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/
#include <iostream>
using namespace std;

//Global costants
const int MAX_COL = 5;

//Function Prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);

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

/**
*The function prints the values of the matrix
* @param mat The matrix to be printed
* @param maxRow The number of rows of the matrix
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	cout << "Content of the matrix: " << endl;

	for (int i = 0; i < maxRow; i++) {
		cout << "\nR" << i << ": ";
		for (int j = 0; j < MAX_COL; j++) {
			cout << mat[i][j] << "\t";  //@todo use setw to make it neater
		}
	}
	cout << endl;
}