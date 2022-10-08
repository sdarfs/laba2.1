#ifndef TASK1_POINTS_H
#define TASK1_POINTS_H
#pragma once
#include <stdbool.h>

typedef struct Point Point;
struct Point
{
    float x, y;
};

bool mainInitialisation(Point* point, float x, float y);
bool mainInput(Point* point);
bool mainOutput(Point point);
float distance(Point start, Point end);
#endif //TASK1_POINTS_H
