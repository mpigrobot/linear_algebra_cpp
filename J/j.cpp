#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	Matrix2d a;
	a << 1, 2,
		3, 4;
	MatrixXd b(2, 2);
	b << 2, 3,
		1, 4;
	cout << "a + b =\n" << a + b << endl;
	cout << "a - b =\n" << a - b << endl;
	cout << "Doing a += b;" << endl;
	a += b;
	cout << "Now a =\n" << a << endl;
	Vector3d v(1, 2, 3);
	Vector3d w(1, 0, 0);
	cout << "-v + w - v =\n" << -v + w - v << std::endl;
}