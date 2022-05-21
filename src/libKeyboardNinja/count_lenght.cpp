#include "lib.h"
#include <fstream>
#include <iostream>

void count_lenght(
        const char* filename, char** array_quotes, int file_error, int test)
{
    int k = 0;
    ifstream fin(filename);
    if (!fin) {
        if (test == 0) {
            cout << "File cannot be opened!" << endl;
        }
        file_error = 1;
    }
    while (!fin.eof()) {
        array_quotes[k] = new char[1024];
        fin.getline(array_quotes[k], 1024, '\n');
        k++;
    }
    fin.close();
}
