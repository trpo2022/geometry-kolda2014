#include "lib.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#define num 10

using namespace std;

void cheak_errors(int x, int y, string str, string str2, char** arr)
{
    int error = 0;
    if (x >= y) {
        for (int i = 0; i < x; i++) {
            if (y < i) {
                error++;
                cout << "Ввели = "
                     << " ожидалось = " << str[i] << endl;
            } else if (str[i] != str2[i]) {
                cout << "Ввели = " << str2[i] << " ожидалось = " << str[i]
                     << endl;
                error++;
            }
        }
        if (error != 0)
            cout << "Количество ошибок = " << error << endl;
        if (error == 0) {
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
    } else {
        for (int i = 0; i < y; i++) {
            if (str[i] != str2[i]) {
                cout << "Ввели = " << str2[i] << " ожидалось = " << str[i]
                     << endl;
                error++;
            }
        }
        if (error != 0)
            cout << "Количество ошибок = " << error << endl;
    }
}
