#include "Check.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_circle(char str[], char re[])
{
    float x, y, r;
    char temp;

    if (3 != sscanf(str, "%*[^(](%f %f, %f)%1[^\n]", &x, &y, &r, &temp)) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Это %s, координаты: x = %.3f y = %.3f, радиус: %.3f\n",
           re,
           x,
           y,
           r);

    circle_perimeter(r);

    circle_area(r);

    return 0;
}

int check_triangle(char str[], char re[])
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    char temp;

    if (8
        != sscanf(
                str,
                "%*[^(]((%f %f, %f %f, %f %f, %f %f))%1[^\n]",
                &x1,
                &y1,
                &x2,
                &y2,
                &x3,
                &y3,
                &x4,
                &y4,
                &temp)) {
        printf("Invalid input!\n");
        return 1;
    }

    if (x1 != x4 || y1 != y4) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Это %s, координаты: x1 = %.3f y1 = %.3f, x2 = %.3f y2 = "
           "%.3f, x3 = %.3f y3 = %.3f, x4 = %.3f y4 = %.3f\n",
           re,
           x1,
           y1,
           x2,
           y2,
           x3,
           y3,
           x4,
           y4);

    triangle_area(x1, y1, x2, y2, x3, y3);

    triangle_perimeter(x1, y1, x2, y2, x3, y3);

    return 0;
}
