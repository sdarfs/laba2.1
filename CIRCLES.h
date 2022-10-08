//
// Created by Daria on 06.10.2022.
//

#ifndef TASK1_CIRCLES_H
#define TASK1_CIRCLES_H

#include "POINTS.h"
typedef struct Circle Circle;
struct Circle
{
    Point center;
    float radius;
};
bool circleInit(Circle* circle, Point center, float radius);
bool circleInput(Circle* circle);
bool circleOutput(Circle circle);
float circleArea(Circle circle);
#endif //TASK1_CIRCLES_H
