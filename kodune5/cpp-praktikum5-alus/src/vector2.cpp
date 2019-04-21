#include "vector2.h"
#include <cmath>

using namespace std;


Vector2::Vector2(float nx, float ny){
    x = nx;
    y = ny;

}

/*
float Vector2::distanceFrom(Vector2 v) {
    return sqrt( (x - v.x)*(x - v.x) + (y - v.y)*(y - v.y) );
}*/

float Vector2::distanceFrom(int ix, int iy){
    return sqrt((x-ix)*(x-ix) + (y-iy)*(y-iy));
}

ostream& operator << (ostream& os, Vector2 v) {
    return os << "(" << v.x << "," << v.y << ")";
}

Vector2 &Vector2::operator =(const Vector2 &v){
    x = v.x;
    y = v.y;
    return *this;
}
