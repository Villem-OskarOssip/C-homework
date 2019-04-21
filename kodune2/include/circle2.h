#ifndef KODUNE_2_CIRCLE2_H
#define KODUNE_2_CIRCLE2_H
/**
 * Class for implementing a circle
 */

#include "point2.h"
#include "line2.h"

class Circle2{
public:
    /**
     * The radius of a circle
     */
    float r;
    /**
     * The centre point of a circle
     */
    Point2 p1;
    /**
     * Constructor for a circle
     * @param np1 desired centre point
     * @param nr desired radius
     */
    Circle2(Point2 np1, float nr);
    /**
     * Default constructor.\ Sets the centre point to (0, 0) and the radius to 0
     */
    Circle2();
    /**
     * Calculates the circumference of the circle
     * @return circumference of the circle
     */
    float circumference();
    /**
     * Calculates the area of the circle
     * @return the area of the circle
     */
    float area();
    /**
     * Check if the circle contains a point
     * @param p the point to be checked
     * @return true if the circle contains the point, false otherwise
     */
    bool contains(Point2 p);
    /**
     * Check if a circle contains a line
     * @param l the line in question
     * @return true if the circle contains the point, false otherwise
     */
    bool contains(Line2 l);
    /**
     * Scales the radius of the circle by a desired factor
     * @param factor desired factor
     */
    void scale(float factor);
    /**
    *Prints the info of the circle as a tuple (centre, radius)
    * @param out
    * @param c Circle
    * @return
    */
    friend ostream&operator<<(ostream& out, const Circle2& c);
};



#endif //KODUNE_2_CIRCLE2_H
