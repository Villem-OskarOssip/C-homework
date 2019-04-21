#ifndef POLYGON_H
#define POLYGON_H

/**
 * Class for implementing a polygon
 */

#include <iostream>
#include <vector>

using namespace std;

template<class T, unsigned short n>
class Polygon {
public:
    std::vector<T> v;

    /**
     * Default constructor for a polygon.
     */
    Polygon<T, n>() {
        for (int j = 0; j < n; ++j) {
            T p;
            v.push_back(p);
        }
    };

    /**
     * Constructor for a polygon with specified values
     * @param pts values
     */
    Polygon<T, n>(vector<T> pts) {
        v = pts;
    }

    /**
     * Method for calculating the perimeter of a polygon
     * @return the perimeter of a polygon
     */
    // selle meetodiga aitas Kristo Karp
    float perimeter() {
        float p = 0.0;
        auto it = v.begin();
        while (it != v.end() - 1) {
            T s = *it;
            it++;
            T e = *it;
            it++;
            p += s.distanceFrom(e);

        }
        T a = v.front();
        T b = v.back();
        p += a.distanceFrom(b);
        return p;
    }

    /**
     * Method for outputting the info of the polygon
     * @return ((vertex1), ... , (vertexn))
     */
    string toString() const {
        string out = "(";
        auto it = v.begin();
        T s = *it;
        out += s.toString();
        it++;
        while (it != v.end() - 1) {
            out += ", ";
            T a = *it;
            string add = a.toString();
            out += add;
            it++;
        }
        out += ")";
        return out;
    }

    friend ostream &operator<<(ostream &os, const Polygon &polygon) {
        os << polygon.toString();
        return os;
    }

};

#endif