#ifndef KODUNE_2_LINE2_H
#define KODUNE_2_LINE2_H

/**
 * Class for implementing a line
 */

#include "point2.h"

class Line2 {
public:
    /**
     * Starting coordinate of a line
     */
    Point2 p1;
    /**
     * End coordinate of a line
     */
    Point2 p2;
    /**
     * Default constructor
     */
    Line2();
    /**
     * Line constructor.
     * @param np1 starting point of a line
     * @param np2 ending point of a line
     */
    Line2(Point2 np1, Point2 np2);
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
    friend ostream& operator<<(ostream& out, const Line2& l);
};

#endif
