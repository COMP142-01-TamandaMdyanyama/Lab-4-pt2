/** \file Matrix.h
* \brief This file is the header for a small matrix library
* \author Tamanda Mdyanyama
* \date 5/04/2024
* \copyright University of Nicosia
*/

//Global costants
const int MAX_COL = 5;

//Function Prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double findMax(const double mat[][MAX_COL], const int maxRow);

#pragma once
