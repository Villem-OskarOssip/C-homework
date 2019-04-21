#ifndef VECTOR2_H
#define VECTOR2_H


#include <iostream>
using std::ostream;
/*! Vector class */
class DrawingWidget;

class Vector2 {

public:

    float x = 0;
    float y = 0;

    Vector2() = default;
    Vector2(float nx, float ny);
    //float distanceFrom(Vector2 v);
    float distanceFrom(int ix, int iy);

    friend ostream& operator << (ostream& valja, Vector2 v); /*!< Kirjutab v?ljundvoogu punkti koordinaadid kujul (nx, ny).*/

    Vector2 &operator=(const Vector2 &v);
};

#endif
