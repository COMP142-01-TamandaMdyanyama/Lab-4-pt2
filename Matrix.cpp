/** \file Lab-4-pt2.cpp
* \brief This file contains the implementation for a small matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/

#include "Matrix.h"
#include <iostream>
#include <iomanip>
#include <cassert>

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
			cout << mat[i][j] << setw(5);  
		}
	}
	cout << endl;
	cout << endl;
}

/**
* The function fills the matrix with random values
* @param mat The matrix to be filled
* @param maxRow The number of rows of the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = rand() % 100;
		}
	}
}

/**
* The function sums up values along a given column
* @param mat The matrix 
* @param column The given column to be summed
* @param maxRow The number of rows of the matrix
* @return sum The summation of all the values in the given column
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	assert(column > 0);
	double sum = 0;
	for (int i = 0; i < maxRow; i++) {
		sum += mat[i][column];
	}
	return sum;
}

/**
*The function sums up values across a given row
* @param mat The matrix
* @param row The given row to sum across
* @param maxRow The number of rows of the matrix
* @return sum The summation of the row
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	assert(row > 0);
	double sum = 0;
	for (int i = 0; i < MAX_COL; i++) {
		sum += mat[row][i];
	}
	return sum;
}

/**
* This function find the highest value in the matrix
* @param mat The matrix
* @param maxRow The number of rows available
* @return max The highest value in the matrix
 */
double findMax(const double mat[][MAX_COL], const int maxRow) {
	double max = mat[0][0];
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (mat[i][j] < max)
				max = mat[i][j];
		}
	}
	return max;
}

/**
* This function sum all the values in the matrix
* @param mat The matrix
* @param maxRow The number of rows available
* @return sum The total of all entries in the matrix
 */
double sumAll(const double mat[][MAX_COL], const int maxRow) {
	double sum = 0;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; i++) {
			sum += mat[i][j];
		}
	}
	return sum;
}

/**
* This function find the average of all entries in the matrix
* @param mat The matrix
* @param maxRow The number of rows available
* @return The average of all entries in the matrix
 */
double average(const double mat[][MAX_COL], const int maxRow) {
	return sumAll(mat, maxRow) / (MAX_COL * maxRow);
}