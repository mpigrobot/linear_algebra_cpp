#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Here is the dynamic matrix \n" << endl;
	MatrixXd m = MatrixXd::Random(3, 3);
	m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
	cout << "m =" << endl << m << endl;
	VectorXd v(3);
	v << 1, 2, 3;
	cout << "m * v =" << endl << m * v << endl;
}