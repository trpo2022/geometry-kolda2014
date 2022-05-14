#include <math.h>
#include <stdio.h>

int circle_area(float r)
{
    float Pi = 3.14, S;
    S = r * r * Pi;
    printf("Circle area: %.2f\n", S);
    return S;
}
