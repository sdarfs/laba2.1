#include "POINTS.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


bool mainInitialisation(Point* point, float x, float y){
    if (point == NULL) return false;

    point->x = x;
    point->y = y;

    return true;
}

bool mainInput(Point* point){
    if (point == NULL) return false;

    float x, y;
    if (scanf("%f %f", &x, &y) != 2) return false;


    return mainInitialisation(point, x, y);
}

bool mainOutput(Point point)
{
    if (&point == NULL) return false;

    printf("x = %f, y = %f", point.x, point.y);

    return true;
}


float distance(Point start, Point end){
    if (&start == NULL || &end == NULL) return -1;

    float d1 = end.x - start.x, d2 = end.y - start.y;
    return sqrt(d1 * d1 + d2 * d2);
}