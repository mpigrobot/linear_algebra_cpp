#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	MatrixXcf a = MatrixXcf::Random(2, 2);
	cout << "Here is the matrix a\n" << a << endl;
	cout << "Here is the matrix a^T\n" << a.transpose() << endl;
	cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
	cout << "Here is the matrix a^*\n" << a.adjoint() << endl;
	cout << "The inverse of a is:\n" << a.inverse() << endl;
}