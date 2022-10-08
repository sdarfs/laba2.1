#include "LINES.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

bool line_Init(Line* line, Point start, Point end){
    if (start.x == end.x && start.y == end.y || line == NULL || &start == NULL || &end == NULL) return false;

    line->startPoint = start;
    line->endPoint = end;
    return true;
}

bool line_Input(Line* line){
    if (line == NULL) return false;

    Point start, end;
    if (scanf("%f %f %f %f", &start.x, &start.y, &end.x, &end.y) != 4) return false;

    return line_Init(line, start, end);
}

bool line_Output(Line line)
{
    if (&line == NULL) return false;

    printf("Начальные координаты линии: ");
    mainOutput(line.startPoint);
    printf("\nКонечные координаты линии: ");
    mainOutput(line.endPoint);

    printf("\nДлина линии: %f", line_Length(line));


    return true;
}
float line_Length(Line line) {
    if (&line == NULL) return -1;

    return distance(line.startPoint, line.endPoint);
}
