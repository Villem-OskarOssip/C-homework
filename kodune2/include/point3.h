#ifndef KODUNE_2_POINT3_H
#define KODUNE_2_POINT3_H

/**
 * Class for implementing a point
 */

#include <iostream>
using std::ostream;
class Point3 {
public:
	/**
	 * Constructor with parameters
	 * @param nx x coordinate
	 * @param ny y coordinate
	 */
	Point3(float nx, float ny, float nz);
	/**
	 * Default constructor that sets x and y to 0
	 */
	Point3();
	/**
	 * Calculates the distance from one point to another
	 * @param p the point to be compared to
	 * @return the distance between the points
	 */
	float distanceFrom(Point3 p);
	/**
	 * x coordinate
	 */
	float x;
	/**
	 * y coordinate
	 */
	float y;
	/**
	 * z coordinate
	 */
	float z;
    /**
    * Prints the point's coordinates as a tuple (x, y)
    * @param out
    * @param p the point
    * @return
    */
    friend ostream& operator<<(ostream& out, const Point3& p);
};


#endif
