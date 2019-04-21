#include <cmath>
#include "../include/point2.h"
using namespace std;

float Point2::distanceFrom(Point2 p){
    return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

Point2::Point2() {
    x = 0;
    y = 0;
}

Point2::Point2(float nx, float ny) {
    x = nx;
    y = ny;
}

ostream& operator<<(ostream& out, const Point2& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}




