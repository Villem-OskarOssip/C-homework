#ifndef DYNAMICLINE_H
#define DYNAMICLINE_H


#include "vector2.h"

class DynamicLine {

public:
    Vector2 *p1;
    Vector2 *p2;

    DynamicLine(Vector2 *v1, Vector2 *v2);
    /*
    DynamicLine(const DynamicLine &l) {
        p1 = l.p1;
        p2 = l.p2;
    }

    DynamicLine &operator=(const DynamicLine &l) {
        p1 = l.p1;
        p2 = l.p2;
        return *this;
    }*/

    ~DynamicLine();


};

#endif // DYNAMICLINE_H
