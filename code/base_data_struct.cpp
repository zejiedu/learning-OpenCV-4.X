#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
int main() {
	Point pt1(12, 23);
	cout <<"p 1:"<< pt1 << endl;
	Point pt2(pt1);
	cout << "p 2:" << pt2 << endl;
	Point pt3 = pt1 + pt2;
	cout << "p 3:" << pt3 << endl;
	Point pt4(pt1 + pt2);
	cout << "p 4:" << pt4 << endl;
	Point pt5 = pt1 - pt2;
	cout << "pt1 - pt2: \n" << pt5 << endl;
	Point pt6 = pt1 * 10;
	cout << "pt1 * 10:\n" << pt6 << endl;
	Point pt(2, 1);
	cout <<"pt1.dot(pt):\n"<< pt1.dot(pt) << endl;
	cout << "pt1.cross(pt)" << pt1.cross(pt) << endl;
	Point3i point3(1, 2, 3);
	cout << "Point3i:\n" << point3 << endl;
	auto sz1234 = Size(12, 34);
	cout << "sz1234" << sz1234 << endl;
	cout << Point(sz1234) << endl;

	cout << "****************Scalar******************" << endl;
	Mat M1(4, 4, CV_32FC2, Scalar(1, 2));
	cout<< M1 << endl;
	
	Mat M2(4, 4, CV_32FC3, Scalar(4, 5, 6));
	cout << "M2:\n" << M2 << endl;
	
	Mat M3(4, 4, CV_32FC4, Scalar(6, 7, 8));
	cout << "M3:\n" << M3 << endl;
	
	Mat M4(4, 4, CV_32FC4, Scalar(1));
	cout << "M4:\n" << M4 << endl;
	cout << "Scalar(1)" << Scalar(1) << endl;//[1,0,0,0]
	
	
	cout << "****************vec******************" << endl;

	Vec<double, 3> vec3d{ 1,2,3 };
	cout << "vec3d{1,2,3}, 1:" << vec3d[0] << "  2:" << vec3d[1] << " 3:" << vec3d[2] << endl;

	Vec3i vec3i{ 3,2,1 };
	auto vec_add = vec3d + (Vec<double, 3>)vec3i;
	cout << "vec_add = vec3d + vec3i: " << vec_add << endl;

	cout << "vec3d *100" << vec3d * 100 << endl;


	Vec<double, 3> d3{ 2,2,3 };
	auto vec_mul = vec3d.mul(d3);
	cout << "vec_mul = vec3d.mul(d3): " << vec_mul;

	cout << "norm" << norm(Vec2i{3,4}) << endl;

	cout << "****************Size******************" << endl;

	Size_<double> sz{1.2,2.0};
	cout << " sz{1.2,2.0}:" << sz << endl;
	cout << " sz{1.2,2.0} area:" << sz.area() << endl;
	Size szi{ 4,5 };
	cout << "szi{ 4,5 }:" << szi << endl;
	cout << "szi{ 4,5 } area::" << szi.area() << endl;
	
	cout << "****************Rect******************" << endl;
	Rect_<double> r1{ 1,2,8,5 };
	cout << "r1{ 1,2,8,5 }" << r1 << endl;
	cout << "x:" << r1.x << " y:" << r1.y << " w" << r1.width << " h" << r1.height << endl;
	cout << "area " << r1.area() << endl;
	cout << "Size " << r1.size() << endl;
	cout << "tl " << r1.tl() << endl;
	cout << "br " << r1.br() << endl;

	Rect r2(Point(2, 3), Size(3, 4));
	cout << "r2 tl " << r2.tl() << endl;
	cout << "r2 br " << r2.br() << endl;

	Rect r3(Point(2, 3), Point(4, 4));
	cout << "tl" << r3.tl() << endl;
	cout << "br" << r3.br() << endl;
	cout << "Size:" << r3.size() << endl;
	cout << "****************RotatedRect******************" << endl;
	RotatedRect rRetc{ Point(5,5),Size(3,3),45 };
	cout << "rRect" << rRetc.boundingRect() << endl;
	cout << "****************Matx******************" << endl;
	Matx<double, 2, 3> mx23d{ 1,2,3,4,5,6 };
	cout << "mx23d:\n" << mx23d << endl;
	cout << mx23d * mx23d.t() << endl;

	auto mx34 = Matx34f::eye();
	cout <<"mx34" << mx34 << endl;

	cout << "****************Range******************" << endl;
	Range range{ 1,9 };
	cout << range << endl;
	cout << range.size() << endl;
	auto all = Range::all();
	cout << all << endl;

	system("pause");
	return 0;
}

