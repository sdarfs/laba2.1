//
// Created by Daria on 05.10.2022.
//

#ifndef TASK1_LINES_H
#define TASK1_LINES_H
#pragma once
#include "POINTS.h"
typedef struct Line Line;
struct Line
{
    Point startPoint, endPoint;
};
bool line_Init(Line* line, Point start, Point end);
bool line_Input(Line* line);
bool line_Output(Line line);
float line_Length(Line line);
#endif //TASK1_LINES_H
