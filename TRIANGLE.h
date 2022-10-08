#ifndef TASK1_TRIANGLE_H
#define TASK1_TRIANGLE_H
#pragma once
#include "POINTS.h"
typedef struct Triangle Triangle;
struct Triangle
{
    Point firstPoint, secondPoint, thirdPoint;
};

bool triangleInit(Triangle* triangle, Point first,Point second, Point third);
bool triangleInput(Triangle* triangle);
bool triangleOutput(Triangle triangle);
float triangleLineLength(Triangle triangle, int lineNumber);
float trianglePerimeter(Triangle triangle);
float triangleArea(Triangle triangle);
#endif //TASK1_TRIANGLE_H
