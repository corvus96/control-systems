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

}