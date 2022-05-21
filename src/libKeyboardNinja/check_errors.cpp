#include "lib.h"
#include <fstream>
#include <iostream>

using namespace std;

void check_errors(
        int quote_length,
        int length_user,
        string quote_line,
        string user_string,
        char** array_quotes,
        int test)
{
    int input_error = 0;
    if (quote_length >= length_user) {
        for (int i = 0; i < quote_length; i++) {
            if (length_user < i) {
                input_error++;
                if (test == 0)
                    cout << "Ввели = "
                         << " ожидалось = " << quote_line[i] << endl;
            } else if (quote_line[i] != user_string[i]) {
                input_error++;
                if (test == 0)
                    cout << "Ввели = " << user_string[i]
                         << " ожидалось = " << quote_line[i] << endl;
            }
        }
        if (test == 0)
            if (input_error != 0)
                cout << "Количество ошибок = " << input_error << endl;
        if (input_error == 0) {
            if (test == 0)
                cout << "Поздравляю, Вы ввели всё верно!" << endl;
            ofstream fout("Quotes.txt");
            for (int i = 0; i < number_citations; i++) {
                if (i == quote_number)
                    fout << array_quotes[i] << " +" << endl;
                else if (i == number_citations - 1)
                    fout << array_quotes[i];
                else
                    fout << array_quotes[i] << endl;
            }
            fout.close();
        }
    } else {
        for (int i = 0; i < length_user; i++) {
            if (quote_line[i] != user_string[i]) {
                input_error++;
                if (test == 0)
                    cout << "Ввели = " << user_string[i]
                         << " ожидалось = " << quote_line[i] << endl;
            }
        }
        if (test == 0)
            cout << "Количество ошибок = " << input_error << endl;
    }
}
