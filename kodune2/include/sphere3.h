#ifndef KODUNE_2_SPHERE3_H
#define KODUNE_2_SPHERE3_H
/**
 * Class for implementing a sphere
 */

#include "point3.h"
#include "line3.h"

class Sphere3{
public:
    /**
     * The radius of a sphere
     */
    float r;
    /**
     * The centre point of a sphere
     */
    Point3 p1;
    /**
     * Constructor for a sphere
     * @param np1 desired sphere point
     * @param nr desired radius
     */
    Sphere3(Point3 np1, float nr);
    /**
     * Default constructor.\ Sets the centre point to (0, 0, 0) and the radius to 0
     */
    Sphere3();
    /**
     * Calculates the circumference of the sphere
     * @return circumference of the sphere
     */
    float circumference();
    /**
     * Calculates the area of the sphere
     * @return the area of the sphere
     */
    float area();
        /**
     * Calculates the volume of the sphere
     * @return the area of the sphere
     */
    float volume();
    /**
     * Check if the sphere contains a point (inside sphere)
     * @param p the point to be checked
     * @return true if the sphere contains the point, false otherwise
     */
    bool contains(Point3 p);
    /**
     * Check if a sphere contains a line
     * @param l the line in question
     * @return true if the sphere contains the point, false otherwise
     */
    bool contains(Line3 l);
    /**
     * Scales the radius of the sphere by a desired factor
     * @param factor desired factor
     */
    void scale(float factor);
    /**
    *Prints the info of the sphere as a tuple (centre, radius)
    * @param out
    * @param c Sphere
    * @return
    */
    friend ostream&operator<<(ostream& out, const Sphere3& c);
};



#endif //KODUNE_2_SHPHERE3_H
