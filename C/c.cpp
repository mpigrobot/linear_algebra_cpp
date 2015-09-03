#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Here is the static matrix \n" << endl;
	Matrix3d m = Matrix3d::Random();
	m = (m + Matrix3d::Constant(1.2)) * 50;
	cout << "m =" << endl << m << endl;
	Vector3d v(1, 2, 3);
	cout << "m * v =" << endl << m * v << endl;
}