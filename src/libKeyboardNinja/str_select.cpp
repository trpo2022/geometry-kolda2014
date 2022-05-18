#include "lib.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <time.h>
#define num 10

int a;

using namespace std;

string str_select(const char* filename)
{
    int r;
    ifstream fin(filename);
    string str;
t:
    srand(time(NULL));
    a = 0;
    r = rand() % num;
    while (!fin.eof()) {
        if (a == r) {
            getline(fin, str, '\n');
            break;
        } else
            getline(fin, str, '\n');
        a++;
    }
    if (str[str.size() - 1] == '+') //проверка на последний символ
        goto t;
    fin.close();
    return str;
}
