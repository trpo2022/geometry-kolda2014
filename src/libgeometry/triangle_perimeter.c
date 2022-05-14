#include <math.h>
#include <stdio.h>

int triangle_perimeter(
        float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, P;
    a = sqrt(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    b = sqrt(((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)));
    c = sqrt(((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)));
    P = (a + b + c);
    printf("Perimeter of the triangle: %.2f\n", P);
    return P;
}
