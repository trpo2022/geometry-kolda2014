#include "libgeometry/Check.h"
#include <stdio.h>

int main()
{
    float x_cir, y_cir, x1_tr, x2_tr, x3_tr, y1_tr, y2_tr, y3_tr, r;
    printf("Enter the coordinates of the circle: ");
    scanf("%f %f %f", &x_cir, &y_cir, &r);
    printf("\nEnter the coordinates x1, y1 for the triangle: ");
    scanf("%f %f", &x1_tr, &y1_tr);
    printf("\nEnter the coordinates x2, y2 for the triangle: ");
    scanf("%f %f", &x2_tr, &y2_tr);
    printf("\nEnter the coordinates x3, y3 for the triangle: ");
    scanf("%f %f", &x3_tr, &y3_tr);
    if (r > 0) {
        check(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    } else {
        printf("Error! Radius is negative");
    }
    circle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    circle_perimeter(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    triangle_area(x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    triangle_perimeter(
            x_cir, y_cir, r, x1_tr, y1_tr, x2_tr, y2_tr, x3_tr, y3_tr);
    return 0;
}
