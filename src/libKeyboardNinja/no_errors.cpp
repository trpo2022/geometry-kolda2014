#include "lib.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#define num 10

using namespace std;

void no_errors(char** arr)
{
    cout << "Поздравляю, Вы ввели всё верно!" << endl;
    ofstream fout("Quotes.txt");
    for (int i = 0; i < num; i++) {
        if (i == a)
            fout << arr[i] << " +" << endl;
        else if (i == num - 1)
            fout << arr[i];
        else
            fout << arr[i] << endl;
    }
    fout.close();
}
