#include <iostream>
#include <sstream>
#include <cstdlib>
#include "../include/geometry.h"


#define SKIP_LINE cout << __FILE__ << ":" << __LINE__ << " Skipped" << endl; //
#define REM //

using namespace std;

int main (int argc, char* argv[]) {

	cout << "########################" << endl;
	cout << "Point2 without params" << endl;
	cout << "-----------------------" << endl;
	// Point2
	// Require default constructor 
	Point2 v1;
	// Require public coordinates x and y
	cout << v1.x << " " << v1.y << endl;
	// Require constructor with two parameters
	Point2 v2 {1.0, -1.0}; // c++11 
	// Require distanceFrom method
	cout << v1.distanceFrom(v2) << endl;
	// Require operator <<
    cout << v1 << endl;

	cout << "########################" << endl;
	cout << "Point2 with params" << endl;
	cout << "-----------------------" << endl;
	// Point2.2
	// Constructor with giver params
	Point2 v3(2,2);
	// Require public coordinates x and y
	cout << v3.x << " " << v3.y << endl;
	// Require constructor with two parameters
	Point2 v4 {1.0, -1.0}; // c++11 
	// Require distanceFrom method
	cout << v3.distanceFrom(v4) << endl;
	// Require operator <<
    cout << v3 << endl;

	cout << "########################" << endl;
	cout << "Line2 without params" << endl;
	cout << "-----------------------" << endl;
	// Line2
	// Require default constructor
	Line2 l1;
	// Require public points p1 and p2
	cout << l1.p1 << "-" << l1.p2 << endl;
	// Require constructor with two parameters
	Line2 l2 {v1, v2};
	// Require method length
	cout << l1.length() << endl;
	// Require operator <<
	cout << l1 << endl;

	cout << "########################" << endl;
	cout << "Line2 with params" << endl;
	cout << "-----------------------" << endl;
	// Line2.2
	// Constructor with given params
	Line2 l3(v3,v4);
	// Require public points p1 and p2
	cout << l3.p1 << "-" << l3.p2 << endl;
	// Require constructor with two parameters
	Line2 l4 {v1, v2};
	// Require method length
	cout << l3.length() << endl;
	// Require operator <<
	cout << l3 << endl;

	cout << "########################" << endl;
	cout << "Circle2 without params" << endl;
	cout << "-----------------------" << endl;
	// Circle2
	// Require default constructor
	Circle2 c1;
	// Require variable p1
	cout << c1.p1 << endl;
	// Require variable r
	cout << c1.r << endl;
	// Require constructor with point and a radius
	Circle2 c2 {v1, 1.0};
	// Require method circumference
	c1.circumference();
	// Require method area
	c1.area();
	// Require method contains(Point2)
	cout << "Circle2 without params (Contains)" << endl;
	c1.contains(v1);
	// Require method contains(Line2)
	c1.contains(l1);
	// Require method scale
	c1.scale(1.0);
	// Require operator <<
	cout << c1 << endl;

	cout << "########################" << endl;
	cout << "Circle2 with params" << endl;
	cout << "-----------------------" << endl;
	// Circle2
	// Constructor with given params
	Circle2 c3(v3, 10);
	// Require variable p1
	cout << c3.p1 << endl;
	// Require variable r
	cout << c3.r << endl;
	// Require constructor with point and a radius
	Circle2 c4 {v1, 1.0};
	// Require method circumference
	c3.circumference();
	// Require method area
	c3.area();
	// Require method contains(Point2)
	cout << "Circle2 with params (Contains)" << endl;
	c3.contains(v1);
	// Require method contains(Line2)
	c3.contains(l1);
	// Require method scale
	c3.scale(1.0);
	// Require operator <<
	cout << c3 << endl;

	cout << "########################" << endl;
	cout << "Point3" << endl;
	cout << "-----------------------" << endl;
	// Point3
	// Require default constructor
	Point3 v3_1(1,1,1);
	// Require public coordinates x, y and z
	cout << v3_1.x << " " << v3_1.y << " " << v3_1.z << endl;
	// Require constructor with three parameters
	Point3 v3_2(1.0, 0.0, -1.0);
	// Requre method distanceFrom
	v3_1.distanceFrom (v3_2);
	// Require operator <<
	cout << v3_1 << endl;

	cout << "########################" << endl;
	cout << "Line3" << endl;
	cout << "-----------------------" << endl;
	// Line3
	// Require default constructor
	Line3 l3_1;
	// Require constructor with two parameters
	Line3 l3_2 {v3_1, v3_2};
	// Require method length
	l3_1.length();
	// Require operator <<
	cout << l3_1 << endl;

	cout << "########################" << endl;
	cout << "Sphere3" << endl;
	cout << "-----------------------" << endl;
	// Sphere3
	// Require default constructor
	Sphere3 s3_1;
	// Require constructor with point and a radius
	Sphere3 s3_2 {v3_1, 1.0};
	// Require method circumference
	s3_1.circumference();
	// Require method volume
	s3_1.volume();
	// Require method contains(Point3)
	cout << s3_1.contains(v3_1) << endl;
	// Require method contains(Line3)
	cout << s3_1.contains(l3_1) << endl;
	// Require method scale
	s3_1.scale(1.0);
	// Require operator <<
	cout << s3_1 << endl; 

	cout << "########################" << endl;
	cout << "Sphere3" << endl;
	cout << "-----------------------" << endl;
	// Sphere3
	// Require default constructor
	Sphere3 s3_10(v3_1, 4);
	// Require constructor with point and a radius
	Sphere3 s3_20 {v3_1, 1.0};
	// Require method circumference
	s3_10.circumference();
	// Require method volume
	s3_10.volume();
	// Require method contains(Point3)
	cout << s3_10.contains(v3_1) << endl;
	// Require method contains(Line3)
	cout << s3_10.contains(l3_1) << endl;
	// Require method scale
	s3_10.scale(1.0);
	// Require operator <<
	cout << s3_10 << endl; 

	return EXIT_SUCCESS;
}
