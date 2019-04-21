#include <cmath>
#include "../include/point3.h"
using namespace std;

float Point3::distanceFrom(Point3 p){
    return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
};

Point3::Point3() {
    x = 0;
    y = 0;
    z = 0;
}

Point3::Point3(float nx, float ny, float nz) {
    x = nx;
    y = ny;
    z = nz;
}

ostream& operator<<(ostream& out, const Point3& p) {
    out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}




