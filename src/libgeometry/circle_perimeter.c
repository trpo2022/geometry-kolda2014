#include <math.h>
#include <stdio.h>

int circle_perimeter(float r)
{
    float Pi = 3.14, P;
    P = 2 * r * Pi;
    printf("Perimeter of the circle: %.2f\n", P);
    return P;
}
