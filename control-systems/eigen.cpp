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

	// define a dynamic matrix, resize it to a 3x3 matrix, 
	// and set its entries to zero, and print the matrix
	Matrix3f matrixD1;
	matrixD1.resize(3, 3);
	matrixD1.setZero(3, 3);
	cout << endl << matrixD1;

	// setting matrix entries - two approaches
	int rowNumber = 5;
	int columnNumber = 5;

	// matrix of zeros
	MatrixXf matrix1zeros;
	matrix1zeros = MatrixXf::Zero(rowNumber, columnNumber);
	cout << "\n \n" << matrix1zeros << endl;
	// another option:
	MatrixXf matrix1zeros1;
	matrix1zeros1.setZero(rowNumber, columnNumber);
	cout << "\n \n" << matrix1zeros1 << endl;

	//matrix of ones
	MatrixXf matrix1ones;
	matrix1ones = MatrixXf::Ones(rowNumber, columnNumber);
	cout << "\n \n" << matrix1ones << endl;
	//another option
	MatrixXf matrix1ones1;
	matrix1ones1.setOnes(rowNumber, columnNumber);
	cout << "\n \n" << matrix1ones1 << endl;

	//matrix of constants
	float value = 1.1;
	MatrixXf matrix1const;
	matrix1const = MatrixXf::Constant(rowNumber, columnNumber, value);
	cout << "\n \n" << matrix1const << endl;
	//another option
	MatrixXf matrix1const1;
	matrix1const1.setConstant(rowNumber, columnNumber, value);
	cout << "\n \n" << matrix1const1 << endl;

	//identity matrix, two approaches

	rowNumber = 10;
	columnNumber = 10;

	MatrixXd matrixIdentity;
	matrixIdentity = MatrixXd::Identity(rowNumber, columnNumber);
	cout << "\n \n" << matrixIdentity << endl;

	MatrixXd matrixIdentity1;
	matrixIdentity1.setIdentity(rowNumber, columnNumber);
	cout << "\n \n" << matrixIdentity1 << endl;
}