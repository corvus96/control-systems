#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;
int main() {
	// define 3x3 matrix of floats and set its entries to zero -explicit declaration
	Matrix <float, 3, 3> matrixA;
	matrixA.setZero();
	cout << matrixA << endl;

	//define 3x3 matrix of floats and set its entries to zero -typedef declaration
	Matrix3f matrixA1;
	matrixA1.setZero();
	cout << "\n" << matrixA1 << endl;

	//define a dynamic matrix, typedef declaration
	MatrixXf matrixB1;

	//constructor, allocate memory, but do not initialize
	MatrixXd matrixC(10, 10);

	// assigning matrix entries 
	MatrixXd matrixC1(2, 2);
	matrixC1(0, 0) = 1;
	matrixC1(0, 1) = 2;
	matrixC1(1, 0) = 3;
	matrixC1(1, 1) = 4;
	cout << endl << matrixC1 << endl;

	// fill-in the matrix entries using comma separated values and print the matrix
	Matrix4f matrixD;
	matrixD << 1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		13, 14, 15, 16;
	cout << endl << matrixD << endl;
}