//
// Created by Daria on 06.10.2022.
//

#include "CIRCLES.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.1415926535
bool circleInit(Circle* circle, Point center, float radius){
    if (circle == NULL || &center == NULL || radius <= 0) return false;

    circle->center = center;
    circle->radius = radius;

    return true;
}

bool circleInput(Circle* circle){
    if (circle == NULL) return false;

    Point center;
    float radius;
    if (scanf("%f%f%f", &center.x, &center.y, &radius) != 3) return false;

    return circleInit(circle, center, radius);
}

bool circleOutput(Circle circle)
{
    if (&circle == NULL) return false;

    printf("\nЦентр круга: ");
    mainOutput(circle.center);
    printf("\nРадиус = %f", circle.radius);

    printf("\nПлощадь = %f", circleArea(circle));

    return true;
}


float circleArea(Circle circle){
    if (&circle == NULL) return false;

    return PI * circle.radius * circle.radius;
}


