#include <iostream>
#include "../eigen/Eigen/Dense"

using namespace Eigen;
using Eigen::MatrixXd;
using namespace std;

int main(int argc, char* argv[])
{
	ArrayXf v(6);
	v << 1, 2, 3, 4, 5, 6;
	cout << "v.head(3) =" << endl << v.head(3) << endl << endl;
	cout << "v.tail<3>() = " << endl << v.tail<3>() << endl << endl;
	v.segment(1, 4) *= 2;
	cout << "after 'v.segment(1,4) *= 2', v =" << endl << v << endl;
}