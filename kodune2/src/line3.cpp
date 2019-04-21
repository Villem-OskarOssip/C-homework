#include "../include/line3.h"

Line3::Line3(Point3 np1, Point3 np2) {
    p1 = np1;
    p2 = np2;
}

Line3::Line3() {
   Point3();
}

float Line3::length() {
    return p1.distanceFrom(p2);
}

ostream&operator<<(ostream& out, const Line3& l){
    out << "(" << l.p1 << " - " << l.p2 << ")";
    return out;
}
