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

