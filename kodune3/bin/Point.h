#ifndef POINT_H
#define POINT_H

/**
 * Class for implementing a point
 */

#include <iostream>
#include <list>
#include <cmath>

using namespace std;

template<unsigned short n>
class Point {
public:
    /**
     * List of coordinates
     */
    std::list<float> coords = std::list<float>(n);


    /**
     * Default constructor that sets the x and y coordinates to 0
     */
    Point<n>() {
        if (n < 0) {
            throw string("n cannot be negative");
        } else {
            coords.assign(n, float());
        }
    };

    /**
     * Gives values the vector coordinates with values from valuelist
     * @param crds valuelist
     */
    Point<n>(list<float> crds) {
        if (n < 0){
            throw string ("n cannot be negative");
        }
        for (float f : crds) {
            coords.push_back(f);
        }
    };

    /**
     * Returns the distance from one point to another.
     */
    // Selle meetodiga aitas mind Marten Jaago
    float distanceFrom(Point<n> p) {
        auto iterator1 = coords.begin();
        auto iterator2 = p.coords.begin();
        float distanceRoot = 0;

        while (iterator1 != coords.end()) {
            distanceRoot += pow((*iterator1 - *iterator2), 2);
            iterator1++;
            iterator2++;
        }

        return sqrt(distanceRoot);
    }

    /**
     * Returns the vector as a string (x1, x2, ..., xn)
     */
    string toString() const {
        string answer = "(";
        auto it = coords.begin();
        answer += to_string(*it);
        it++;
        while (it != coords.end()){
            answer += ", " + to_string(*it);
            it++;
        }
        answer += ")";
        return answer;
    };

    /**
     * Prints out the constant.
     */
    friend ostream &operator<<(ostream &os, const Point &point) {
        cout << point.toString();
        return cout;
    }

};


#endif