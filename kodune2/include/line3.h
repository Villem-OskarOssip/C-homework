#ifndef KODUNE_2_LINE3_H
#define KODUNE_2_LINE3_H

/**
 * Class for implementing a line
 */

#include "point3.h"

class Line3 {
public:
    /**
     * Starting coordinate of a line
     */
    Point3 p1;
    /**
     * End coordinate of a line
     */
    Point3 p2;
    /**
     * Default constructor
     */
    Line3();
    /**
     * Line constructor.
     * @param np1 starting point of a line
     * @param np2 ending point of a line
     */
    Line3(Point3 np1, Point3 np2);
    /**
     * Calculates the length of a line
     * @return the length of a line
     */
    float length();
    /**
    *Prints the info of the line as a tuple (p1, p2)
    * @param out
    * @param l line
    * @return
    */
    friend ostream& operator<<(ostream& out, const Line3& l);
};

#endif
