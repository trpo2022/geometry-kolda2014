#include <ctest.h>
#include "libKeyboardNinja/lib.h"
#include <stdio.h>
#include <stdlib.h>

CTEST(ctest, 1)
{
 char *arr[5];
 int error=0;
    CountLenght("Quotes.txt", arr, error);
    ASSERT_EQUAL(0, error);
}

CTEST(ctest, 2)
{
 char *arr[5];
 int error=0;
    CountLenght("Quotes.txt", arr, error);
    ASSERT_EQUAL(1, error);
}
