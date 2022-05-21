#include "lib.h"
#include <ctime>
#include <fstream>

int quote_number;

using namespace std;

string str_select(const char* filename)
{
    int r;
    ifstream fin(filename);
    string quote_line;
t:
    srand(time(NULL));
    quote_number = 0;
    r = rand() % number_citations;
    while (!fin.eof()) {
        if (quote_number == r) {
            getline(fin, quote_line, '\n');
            break;
        } else
            getline(fin, quote_line, '\n');
        quote_number++;
    }
    if (quote_line[quote_line.size() - 1] == '+')
        goto t;
    fin.close();
    return quote_line;
}
