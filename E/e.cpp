#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	Matrix3f m;
	m << 1, 2, 3,
		4, 5, 6,
		7, 8, 9;
	cout << m;
}