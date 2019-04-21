#ifndef SPHERE_H
#define SPHERE_H

/**
 * Class for implementing a spehere.
 */

#include <iostream>
#include <string>
#include "Line.h"


template<class T>
class Sphere {
public:
    T o;
    float r;

    /**
     * Default constructor
     */
    Sphere<T>() {
        o;
        r = 0;
    }

    /**
     * Constructor with custom values
     * @param o origin point
     * @param r radius
     */
    Sphere<T>(T o, float r) : o(o), r(r) {}

    /**
     * Checks whether the vertex is on the sphere or in it
     * @param v vertex
     * @return true if it is, false otherwise
     */
    bool contains(T v) {
        return o.distanceFrom(v) < r;
    }

    /**
     * Checks whether the line is inside the sphere
     * @param l line
     * @return true if it is, false otherwise
     */
    bool contains(Line<T> l) {
        return contains(l.p1) && contains(l.p2);
    }

    void scale(float f) {
        if (f < 0) {
            throw string("Factor cannot be negative.");
        } else {
            r = r * f;
        }
    }

    /**
     * returns the sphere's origin and radius as a string
     * @return ((origin), radius)
     */
    string toString() const {
        return "((" + o.toString() + "), " + to_string(r) + ")";
    }

    /**
     * Outputs the sphere's info
     */
    friend std::ostream &operator<<(std::ostream &os, const Sphere &sphere) {
        os << sphere.toString();
        return os;
    }

};

#endif