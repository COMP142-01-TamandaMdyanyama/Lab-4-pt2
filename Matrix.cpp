/** \file Lab-4-pt2.cpp
* \brief This file contains the implementation for a small matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/

#include "Matrix.h"
#include <iostream>

using namespace std;

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
	cout << endl;
}