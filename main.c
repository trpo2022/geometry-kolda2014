#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
<<<<<<< HEAD
    int n = 50;
    int z = 10;
    char str[n];
    char re[z];
=======
    char str[50];
    char re[10];
>>>>>>> 2f46dc76b3140c37b23556949a0f37cb926cc44a

    while (1) {
        fgets(str, 50, stdin);
        str[strlen(str) - 1] = '\0';
        sscanf(str, "%[^(]%*[\n]", re);

        for (int i = 0; re[i]; i++)
            re[i] = tolower(re[i]);

        if (strcmp(re, "circle") == 0) {
            float x, y, r;
            char temp;

            if (3
                != sscanf(str, "%*[^(](%f %f, %f)%1[^\n]", &x, &y, &r, &temp)) {
                printf("Invalid input!\n");
                continue;
            }

<<<<<<< HEAD
            printf("Это %s, координаты: x = %.3g y = %.3g, радиус: %.3g\n",
                   re,
                   x,
                   y,
                   r);
=======
            printf("It's a circle!\n");
>>>>>>> 2f46dc76b3140c37b23556949a0f37cb926cc44a

        } else if (strcmp(re, "triangle") == 0) {
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
                continue;
            }

<<<<<<< HEAD
            printf("Это %s, координаты: x1 = %.3g y1 = %.3g, x2 = %.3g y2 = "
                   "%.3g, x3 = %.3g y3 = %.3g, x4 = %.3g y4 = %.3g\n",
                   re,
                   x1,
                   y1,
                   x2,
                   y2,
                   x3,
                   y3,
                   x4,
                   y4);
=======
            printf("It's a triangle!\n");
>>>>>>> 2f46dc76b3140c37b23556949a0f37cb926cc44a

        } else
            printf("Invalid input!\n");
    }

    return 0;
}
