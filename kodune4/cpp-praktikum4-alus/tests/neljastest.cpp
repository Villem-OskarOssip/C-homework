#include <cstdlib>
#include <iostream>
#include <cmath>
#include "../include/neljas.h"
using namespace std;

int testcount = 0;
#define TEST(a,b1,c1,b2,c2) cout << "Test " << ++testcount << ". " << a << ": " << (cmpf(b1,b2) && cmpf(c1,c2) ? "OK" :"FAIL") << endl
#define TEST2(a,b1,c1,b2,c2) cout << "Test " << ++testcount << ". " << a << ": " << (cmpresult(b1,c1,b2,c2) ? "OK" :"FAIL") << endl

bool cmpf (double a, double b) {
	if (fabs (a - b) < 0.001f) 
		return true;
	return false;
}

bool cmpresult (double s1, double s2, double r1, double r2) {
	return (cmpf (s1, r1) && cmpf (s2, r2)) || (cmpf (s1, r2) && cmpf (s2, r1));
}


int main (int argc, char* argv[]) {

	// Task 1: swapping
	cout << "--Ülesanne 1. Kahe muutuja väärtuse vahetamine viite ja viidaga" << endl;
	double x = 1.0, y = -2.0;
	swap_ref<double> (x, y);
	TEST("swap_ref<double> (x, y)(-2,1)", x, y, -2.0, 1.0);
	swap_ptr<double> (&x, &y);
	TEST("swap_ptr<double> (&x, &y)(1,-2)", x, y, 1.0, -2.0);

	// Task 2: equation
	cout << "--Ülesanne 2. Funktsioon võrrandi lahendamiseks" << endl;
	double a = 1.0, b = -2.0, c = 1.0;
	double solution1 = 0, solution2 = 0;	// lahendid võiksid olla 1 ja 1
	if (solve (a, b, c, solution1, solution2)) {
		cout << "Lahendid on: " << solution1 << ", " << solution2 << endl;
	} else {
		cout << "Puuduvad reaalarvulised lahendid!" << endl;	
	}
	TEST2("solve (1, -2, 1, s1, s2)(1,1)", solution1, solution2, 1, 1);

	// Task 3
	Point2 p1 {1.0, 2.0}; Point2 p2 {0,0}; Point2 p3 {5.0, 2.0};
	DynamicLine<Point2> l1 {&p1, &p2};	// lõik p1 ja p2 vahel
	DynamicLine<Point2> l2 {nullptr, nullptr};
	l2 = l1;		// kopeerime lõigu l1 (tipud jäävad samaks)
	l2.p2 = &p3;				// määrame l2 teise otstipu
	p1.x = 2.0;		

	// Task 4
	MyArray<int> numbers;			// jada arvudest
	numbers.addElement (5);			// lisame ühe elemendi
	numbers.addElement (11);		// ja veel ühe
	MyArray<int> copy = numbers;	// kopeerime jada (koopiakonstruktor)
	copy.addElement (13);			// lisame koopiasse elemendi
	
	MyArray<int> copy2;
	copy2 = numbers;				// kasutame omistamisoperaatorit
	
	if (numbers.getSize () != 2 || copy.getSize () != 3 || copy2.getSize () != 2)	// kontrollime suuruseid 
		cout << "Copy failed – wrong sizes!" << endl;
	if (numbers.elementAt(0) != copy.elementAt(0) || numbers.elementAt(1) != copy.elementAt(1)) // kontrollime sisu
		cout << "Copy failed – wrong elements!" << endl;

	cout << "Testide arv: " << testcount << endl;
	return EXIT_SUCCESS;
}
