#ifndef KODUNE_2_POINT2_H
#define KODUNE_2_POINT2_H

/**
 * Class for implementing a point
 */

#include <iostream>
using std::ostream;
class Point2 {
public:
	/**
	 * Constructor with parameters
	 * @param nx x coordinate
	 * @param ny y coordinate
	 */
	Point2(float nx, float ny);
	/**
	 * Default constructor that sets x and y to 0
	 */
	Point2();
	/**
	 * Calculates the distance from one point to another
	 * @param p the point to be compared to
	 * @return the distance between the points
	 */
	float distanceFrom(Point2 p);
	/**
	 * x coordinate
	 */
	float x;
	/**
	 * y coordinate
	 */
	float y;
    /**
    * Prints the point's coordinates as a tuple (x, y)
    * @param out
    * @param p the point
    * @return
    */
    friend ostream& operator<<(ostream& out, const Point2& p);
};


#endif
