#include <ctest.h>
#include <libgeometry/Check.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(ctest, 1)
{
    char a[] = "circle(1 2, 3)";
    char b[] = "circle";
    ASSERT_EQUAL(0, check_circle(a, b));
}

CTEST(ctect, 2)
{
    char a[] = "circle(1 2,,3)";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(ctect, 3)
{
    char a[] = "circle(1,2 3)";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(ctect, 4)
{
    char a[] = "circle(1 2 3)";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(ctest, 5)
{
    char a[] = "cicle(1 2, 3)";
    char b[] = "circle";
    ASSERT_EQUAL(0, check_circle(a, b));
}

CTEST(ctest, 6)
{
    char a[] = "circle(1 2, 3))";
    char b[] = "circle";
    ASSERT_EQUAL(1, check_circle(a, b));
}

CTEST(ctect, 7)
{
    char a[] = "triangle((1 2, 2 4, 4 2, 1 2))";
    char b[] = "triangle";
    ASSERT_EQUAL(0, check_triangle(a, b));
}

CTEST(ctect, 8)
{
    char a[] = "triangle(1 2, 2 3, 3 4, 1 2)";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}

CTEST(ctect, 9)
{
    char a[] = "triangle((1 5, 2 3, 3 4, 1 6))";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}

CTEST(ctect, 10)
{
    char a[] = "triangle((1 5, 2 3, 3, 4,1 5))";
    char b[] = "triangle";
    ASSERT_EQUAL(1, check_triangle(a, b));
}

CTEST(ctect, 11)
{
    char a[] = "triengle((1 2, 2 4, 4 2, 1 2))";
    char b[] = "triangle";
    ASSERT_EQUAL(0, check_triangle(a, b));
}
