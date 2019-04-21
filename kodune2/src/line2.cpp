#include "../include/line2.h"

Line2::Line2(Point2 np1, Point2 np2) {
    p1 = np1;
    p2 = np2;
}

Line2::Line2() {
   Point2();
}

float Line2::length() {
    return p1.distanceFrom(p2);
}

ostream&operator<<(ostream& out, const Line2& l){
    out << "(" << l.p1 << " - " << l.p2 << ")";
    return out;
}
