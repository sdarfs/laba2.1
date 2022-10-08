#include "TRIANGLE.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

bool triangleInit(Triangle* triangle, Point first, Point second, Point third){
    if (triangle == NULL || &first == NULL ||
    &second == NULL || &third == NULL) return false;

    float d1 = distance(first, second),
          d2 = distance(second, third),
          d3 = distance(third, first);
    if (d1 == 0 || d2 == 0 || d3 == 0 ||
        d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2){
        return false;
    }

    triangle->firstPoint = first;
    triangle->secondPoint = second;
    triangle->thirdPoint = third;
    return true;
}
bool triangleInput(Triangle* triangle){
    if (triangle == NULL) return false;

    Point first, second, third;
    if (scanf("%f%f%f%f%f%f", &first.x, &first.y,&second.x, &second.y, &third.x, &third.y) != 6) return false;
    return triangleInit(triangle, first, second, third);
}



bool triangleOutput(Triangle Triangle){
    if (&Triangle == NULL) return false;

    printf("\nВывод первой точки:");
    mainOutput(Triangle.firstPoint);
    printf("\nВторая точка:");
    mainOutput(Triangle.secondPoint);
    printf("\nТретья точка:");
    mainOutput(Triangle.thirdPoint);

    printf("\nПервая линия: %f", triangleLineLength(Triangle, 1));
    printf("\nВторая линия: %f", triangleLineLength(Triangle, 2));
    printf("\nТретья линия: %f", triangleLineLength(Triangle, 3));

    printf("\nПериметр треугольника = %f",trianglePerimeter(Triangle));
    printf("\nПлощадь треугольника = %f",triangleArea(Triangle));

    return true;
}


float triangleLineLength(Triangle triangle, int lineNumber) {
    if (&triangle == NULL || lineNumber < 1 || lineNumber>3) return -1;

    switch (lineNumber){
        case 1:
            return distance(triangle.firstPoint, triangle.secondPoint);
            break;

        case 2:
            return distance(triangle.secondPoint, triangle.thirdPoint);
            break;

        case 3:
            return distance(triangle.thirdPoint, triangle.firstPoint);
            break;
    }
}


float trianglePerimeter(Triangle triangle)
{
    if (&triangle == NULL) return -1;

    float perimeter = 0;
    for (int i = 1; i < 4; i++) {
        perimeter += triangleLineLength(triangle, i);
    }

    return perimeter;
}

float triangleArea(Triangle triangle) {
    if (&triangle == NULL) return -1;

    float semiPerimeter = trianglePerimeter(triangle) / 2;
    return sqrtf(semiPerimeter * (semiPerimeter - triangleLineLength(triangle, 1)) *
                 (semiPerimeter - triangleLineLength(triangle, 2)) * (semiPerimeter - triangleLineLength(triangle, 3)));
}