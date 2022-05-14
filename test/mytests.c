#include <ctest.h>
#include <libgeometry/Check.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(ctest, write1)
{
    ASSERT_EQUAL(0, check_circle((char*)"circle(1 2, 3)", (char*)"circle"));
}
