#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
int main() {
	Point point1(12,23);
	Point3i point2(1, 2, 3);

	Scalar myScalar;
	myScalar = cv::Scalar(0, 255, 0);
	cout << "myScalar = " << myScalar << endl;

	Vec2b v;
	cv::Size size(4, 6);

	Rect r;
	RotatedRect rs;

	Complex<double> ss;
	Range rrr;

	alignPtr();

	isinf<int>(234);

	system("pause");
	return 0;
}

