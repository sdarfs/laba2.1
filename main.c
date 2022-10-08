#include <stdio.h>
#include <stdlib.h>
#include "POINTS.h"
#include "LINES.h"
#include "SQUARE.h"
#include "TRIANGLE.h"
#include "CIRCLES.h"
int main() {
    //Тест обычных POINTS
    Point firstPoint, secondPoint;
    printf("Введите координаты первой точки через пробел(пример: 6 0): ");
    mainInput(&firstPoint);
    printf("\nВведите координату второй точки через пробел(пример: 6 0): ");
    mainInput(&secondPoint);

    printf("\nВывод координат первой точки: ");
    mainOutput(firstPoint);
    printf("\nВывод координат второй точки: ");
    mainOutput(secondPoint);

    printf("\nРасстояние между ними: %f", distance(firstPoint, secondPoint));

    //Тест динамических Point
    Point* firstDynamicPoint = (Point*)malloc(sizeof(Point)) , * secondDynamicPoint = (Point*)malloc(sizeof(Point));
    printf("\nВведите координаты первой точки через пробел(пример: 6 0): ");
    mainInput(firstDynamicPoint);
    printf("\nВведите координаты второй точки через пробел(пример: 6 0): ");
    mainInput(secondDynamicPoint);

    printf("\nВывод координат первой точки: ");
    mainOutput(*firstDynamicPoint);
    printf("\nВывод координат второй точки: ");
    mainOutput(*secondDynamicPoint);

    printf("\nРасстояние между ними: %f", distance(*firstDynamicPoint, *secondDynamicPoint));
    free(firstDynamicPoint);
    free(secondDynamicPoint);

    //Тест Line
    Line line;
    printf("\nВведите начальные и конечные координаты линии через пробелы(пример 1 2 3 4) : ");
    line_Input(&line);
    line_Output(line);


    //Тест динамической Line
    Line* dynamicLine = (Line*)malloc(sizeof(Line));
    printf("\nВведите начальные и конечные координаты линии через пробелы(пример 1 2 3 4): ");
    line_Input(dynamicLine);
    line_Output(*dynamicLine);
    free(dynamicLine);

    //Тест Triangle
    Triangle triangle;
    printf("\nТреугольник.Введите начальные и конечные координаты линий через пробелы(пример 1 2 3 4 5 6): ");
    triangleInput(&triangle);
    triangleOutput(triangle);

    //Тест Square
    Square square;
    printf("\nКвадрат.Введите начальные и конечные координаты линий через пробелы(пример 1 2 3 4 5 6 7 8): ");
    squareInput(&square);
    squareOutput(square);

    //Тест circle
    Circle Circle;
    printf("\nВведите координаты центра и радиус круга: ");
    circleInput(&Circle);
    circleOutput(Circle);

    return 0;
}
