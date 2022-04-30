#include <math.h>
#include <stdio.h>

int triangle_area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, S, P;
    a = sqrt(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    b = sqrt(((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)));
    c = sqrt(((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)));
    P = (a + b + c) / 2;
    S = sqrt(P * (P - a) * (P - b) * (P - c));
    printf("Triangle area: %.2f\n", S);
    return S;
}
