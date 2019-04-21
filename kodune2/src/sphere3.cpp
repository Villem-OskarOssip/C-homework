#include <cmath>
#include "../include/sphere3.h"

Sphere3::Sphere3(Point3 np1, float nr) {
    p1 = np1;
    if (nr < 0) r = 0;
    else r = nr;
}

Sphere3::Sphere3() {
    p1 = Point3();
    r = 0;
}

float Sphere3::circumference(){
    return 2 * acos(-1.0) * Sphere3::r;
}

float Sphere3::area(){
    return 4.0 * acos(-1.0) * pow(r, 2);
}

float Sphere3::volume(){
    return (4.0 * acos(-1.0) * pow(r, 3))/3.0;
}

bool Sphere3::contains(Point3 p){
    return (pow((p.x - p1.x), 2) + pow((p.y - p1.y),2) + pow((p.z - p1.z), 2)) < (pow(r, 2)) ;
}

bool Sphere3::contains(Line3 l){
    return contains(l.p2) && contains(l.p1);
}

void Sphere3::scale(float factor){
    if (factor < 0){
        throw std::invalid_argument("Negative factor.");
    }
    else {
        r = factor * r;
    }
}

ostream&operator<<(ostream& out, const Sphere3& c){
    out << "(" << c.p1 << ", " << c.r << ")";
    return out;
}
