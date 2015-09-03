#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	Matrix2d mat;
	mat << 1, 2,
		3, 4;
	Vector2d u(-1, 1), v(2, 0);
	cout << "Here is mat*mat:\n" << mat*mat << endl;
	cout << "Here is mat*u:\n" << mat*u << endl;
	cout << "Here is u^T*mat:\n" << u.transpose()*mat << endl;
	cout << "Here is u^T*v:\n" << u.transpose()*v << endl;
	cout << "Here is u*v^T:\n" << u*v.transpose() << endl;
	cout << "Let's multiply mat by itself" << endl;
	mat = mat*mat;
	cout << "Now mat is mat:\n" << mat << endl;
}