#include "SQUARE.h"
#include <stdlib.h>
#include <stdio.h>

bool squareInit(Square* square, Point first, Point second, Point third, Point fourth){
    if (square == NULL || &first == NULL ||
        &second == NULL || &third == NULL || &fourth == NULL) return false;

    //float d1 = distance(first, second),
    //        d2 = distance(second, third),
    //        d3 = distance(third, fourth),
    //        d4 = distance(fourth,first );

   // if (d1 == 0 || d2 == 0 || d3 == 0 || d4==0 ||
   //         distance(first, third) == 0 ||
   //         distance(second, fourth) == 0 ||
   //         d1 != d2 || d1 != d3 || d1 != d4 || d2 != d3 || d2 != d4 || d3 != d4){
   //     return false;
   // }

    square->PoinFfirst= first;
    square->PointSecond = second;
    square->PointThird = third;
    square->PointFourth = fourth;
    return true;
}
bool squareInput(Square* square){
    if (square == NULL) return false;

    Point first, second, third, fourth;
    scanf("%f%f", &first.x, &first.y);
    scanf("%f%f", &second.x, &second.y);
    scanf("%f%f", &third.x, &third.y);
    scanf("%f%f",&fourth.x, &fourth.y);

    return squareInit(square, first, second, third, fourth);
}
float squareLineLength(Square square){
    if (&square == NULL) return -1;
    return distance(square.PoinFfirst, square.PointSecond);
}
bool squareOutput(Square Square){
    if (&Square == NULL) return false;

    printf("\nПервая точка:");
    mainOutput(Square.PoinFfirst);
    printf("\nВторая точка:");
    mainOutput(Square.PointSecond);
    printf("\nТретья точка:");
    mainOutput(Square.PointThird);
    printf("\nЧетвертая точка:");
    mainOutput(Square.PointFourth);
    float line;
    line = squareLineLength(Square);
    printf("\nДлина линии квадрата:");
    printf("%f", line);
    float perimetr;
    perimetr = squarePerimeter(Square);
    printf("\nПериметр квадрата: ");
    printf("%f", perimetr);
    float area;
    area = squareArea(Square);
    printf("\nПлощадь квадрата: ");
    printf("%f", area);

    return true;
}

float squarePerimeter(Square square){
    if (&square == NULL) return -1;

    return squareLineLength(square)*4;
}

float squareArea(Square square){
    if (&square == NULL)  return -1;

    return squareLineLength(square) * squareLineLength(square);
}