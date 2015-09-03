#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{

	MatrixXf a(2, 2);
	cout << "a is of size " << a.rows() << "x" << a.cols() << endl;
	MatrixXf b(3, 3);
	a = b;
	cout << "a is now of size " << a.rows() << "x" << a.cols() << endl;
}