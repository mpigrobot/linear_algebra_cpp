#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	Matrix3d A;
	A << 1, 1, 1,
		2, -1, -1,
		2, -4, 5;

	HouseholderQR<Matrix3d> qr;
	qr.compute(A);
	MatrixXd R = qr.matrixQR().triangularView<Upper>();
	MatrixXd Q = qr.householderQ();
	cout << "QR2(): HouseholderQR---------------------------------------------" << std::endl;
	cout << "A " << endl << A << endl << endl;
	cout << "qr.matrixQR()" << endl << qr.matrixQR() << endl << endl;
	cout << "R" << endl << R << endl << endl;
	cout << "Q " << endl << Q << endl << endl;
	cout << "Q*R" << endl << Q*R << endl << endl;
}