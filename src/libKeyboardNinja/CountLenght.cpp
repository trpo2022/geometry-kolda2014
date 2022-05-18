#include "lib.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#define num 10

using namespace std;

void CountLenght(const char* filename, char** arr, int error)
{
    int k = 0;
    ifstream fin(filename);
    if(! fin)
    {
        cout <<"File cannot be opened!"<<endl;
        error=1;
    }
    while (!fin.eof()) {
        arr[k] = new char[1024];
        fin.getline(arr[k], 1024, '\n');
        k++;
    }
    fin.close();
}
