#include "dynamicline.h"

DynamicLine::DynamicLine(Vector2 *v1, Vector2 *v2){
    p1 = v1;
    p2 = v2;
}
DynamicLine::~DynamicLine(){
    delete this;
}

