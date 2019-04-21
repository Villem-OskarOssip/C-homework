#include <cmath>
#include "../include/circle2.h"

Circle2::Circle2(Point2 np1, float nr) {
    p1 = np1;
    if (nr < 0) r = 0;
    else r = nr;
}

Circle2::Circle2() {
    p1 = Point2();
    r = 0;
}

float Circle2::circumference(){
    return 2 * acos(-1.0) * Circle2::r;
}

float Circle2::area(){
    return pow(r, 2.0) * acos(-1.0);
}

bool Circle2::contains(Point2 p){
    if (p1.distanceFrom(p) <= r) return true;
    else return false;
}

bool Circle2::contains(Line2 l){
    if (contains(l.p2) && contains(l.p1)) return true;
    else return false;
}

void Circle2::scale(float factor){
    if (factor < 0){
        throw std::invalid_argument("Negative factor.");
    }
    else {
        r = factor * r;
    }
}

ostream&operator<<(ostream& out, const Circle2& c){
    out << "(" << c.p1 << ", " << c.r << ")";
    return out;
}
