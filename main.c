#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[50];
    char re[10];

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

            printf("It's a circle!\n");

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

            printf("It's a triangle!\n");

        } else
            printf("Invalid input!\n");
    }

    return 0;
}
