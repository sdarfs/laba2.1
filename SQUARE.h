//
// Created by Daria on 05.10.2022.
//

#ifndef TASK1_SQUARE_H
#define TASK1_SQUARE_H
#pragma once
#include "POINTS.h"
#include <stdbool.h>

typedef struct Square Square;
struct Square{
    Point PoinFfirst, PointSecond, PointThird, PointFourth;
};

bool squareInit(Square* square, Point first, Point second, Point third, Point fourth);
bool squareInput(Square* square);
bool squareOutput(Square square);
float squareLineLength(Square square);
float squarePerimeter(Square square);
float squareArea(Square square);
#endif //TASK1_SQUARE_H
