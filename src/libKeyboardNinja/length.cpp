#include <string>

using namespace std;

int length(string str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}
