#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <list>
#include <algorithm>
//#include "myfunctors.h"
#include "../include/geometry.h"
using namespace std;

int testcount = 0;
#define TEST(a,b1,b2) cout << "Test " << ++testcount << ". " << a << ": " << (cmpf(b1,b2) ? "OK" :"FAIL") << endl
#define TEST2(a,b1,b2) cout << "Test " << ++testcount << ". " << a << ": " << (compStr(b1,b2) ? "OK" :"FAIL") << endl

bool cmpf (float a, float b) {
	if (fabs (a - b) < 0.001f) 
		return true;
	return false;
}

bool compStr(string actual, string mustBe) { // just to ignore the spaces	
	actual.erase(remove_if(actual.begin(), actual.end(), ::isspace), actual.end());
	mustBe.erase(remove_if(mustBe.begin(), mustBe.end(), ::isspace), mustBe.end());
	return actual == mustBe || "(" + actual + ")" == mustBe;
}

int main (int argc, char* argv[]) {

	// Warning! This test only tests for the presence of methods,
	// not for any kind of validity.
	// TODO: lisa oma testid

	// Task 1

	// Point<n>
	cout << "--Testi klassi Point<n>" << endl;
	// Require default constructor 
	Point<2> v1;
	// Require member coords
	cout << v1.coords.size() << endl;
	TEST("Point<2> vaikekonstruktor v1.coords.size()(2)", v1.coords.size(), 2);
	// Require constructor with parameters
	Point<2> v2 { list<float>{} };
	// Require distanceFrom method
	float f = v1.distanceFrom(v1);
	TEST("Point<2> v1.distanceFrom(v1)(0)", f, 0.0f);
	// Require toString method
	cout << v1.toString () << endl;
	TEST2("Point<2> vaikekonstruktor v1(0,0)", v1.toString (), "(0, 0)");
	// Require << operators
	cout << v1 << endl;
	
	// Line<V>
	// Require default constructor
	Line< Point<2> > l1;
	// Require constructor with two parameters
	Line< Point<2> > l2 {v1, v1};
	// Require members p1 and p2
	cout << l1.p1.toString() << "-" << l1.p2.toString () << endl;
	// Require method length
	f = l1.length();
	// Require toString method
	cout << l1.toString() << endl;
	// Require << operators
	cout << l1 << endl;

	// Sphere<V>
	// Require default constructor
	Sphere<Point<2> > c1;
	// Require variable o
	cout << c1.o.toString();
	// Require variable r
	cout << c1.r << endl;
	// Require constructor with vector and a radius
	Sphere< Point<2> > c2 {v1, 1.0};
	// Require method contains(Point<n>)
	bool b = c1.contains(v1);
	// Require method contains(Line<Point<n>>)
	b = c1.contains(l1);
	// Require method scale
	c1.scale(1.0);
	// Require toString method
	cout << c1.toString () << endl;
	// Require << operators
	cout << c1 << endl;

	// Task 2

	// Require default constructor
	Polygon<Point<2>, 3> triangle;
	// Require constructor with parameters
	Polygon<Point<2>, 3> triangle2 {vector< Point<2> >{} };
	// Require method perimeter
	float y = triangle.perimeter();
	// Require toString method
	cout << triangle.toString () << endl;
	// Require << operators
	cout << triangle << endl;
	
	/* Remove this comment to test the bonus tasks 

	// Require object SumElements
	SumElements<float> sum;
	// Require operator ()
	sum (1.0);
	// Require method result
	float z = sum.result();

	Remove this comment to test the bonus task */   
	
	cout << "Testide arv: " << testcount << endl;
	return EXIT_SUCCESS;
}
