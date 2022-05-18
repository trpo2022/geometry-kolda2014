#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#define num 10

using namespace std;

int length(string str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}
