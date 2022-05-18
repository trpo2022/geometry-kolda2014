#include "libKeyboardNinja/lib.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string.h>
#include <time.h>
#define num 10

using namespace std;

int main()
{
    char **arr;
    arr = new char*[num];
    int error = 0;
    CountLenght("Quotes.txt", arr, error);
    string str, str2;
    int x, y;
    str = str_select("Quotes.txt");
    cout << str << endl;
    //ввод строки пользователем
    getline(cin, str2);
    //вычисления длины строк
    x = length(str);
    y = length(str2);
    //проверка на ошибки
    cheak_errors(x, y, str, str2, arr);
    //очищение памяти
    for (int i = 0; i < num; i++)
    	delete[] arr[i];
    delete[] arr;
    return 0;
}
