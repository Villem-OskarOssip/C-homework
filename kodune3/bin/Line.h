#ifndef LINE_H
#define LINE_H

/**
 * Class for implementing a line
 */

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

template<class T>
class Line {
public:
    T p1;
    T p2;

    /**
     * Default line constructor
     */
    Line<T>() = default;

    /**
     * Line constructor with desired points
     * @param np1 starting point
     * @param np2 end point
     */
    Line<T>(T np1, T np2) {
        p1 = np1;
        p2 = np2;
    }

    /**
     * Method for getting the length of a line
     * @return length of a line
     */
    float length() {
        return p1.distanceFrom(p2);
    }

    /**
     * Method for returning the line start and end points
     * @return ((p1)-(p2))
     */
    string toString() const {
        return "((" + p1.toString() + ")-(" + p2.toString() + "))";
    }

    friend ostream &operator<<(ostream &os, const Line &line) {
        os << line.toString();
        return os;
    }
};


#endif