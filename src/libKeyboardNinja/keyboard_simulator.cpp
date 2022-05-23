#include "lib.h"
#include <fstream>
#include <iostream>

void keyboard_simulator(
        int quote_length,
        int length_user,
        std::string quote_line,
        std::string user_string,
    char** array_quotes,
        int *input_error,
        const char* filename,
        int test)
{
    *input_error = 0;
    if (quote_length >= length_user) {
        for (int i = 0; i < quote_length; i++) {
            if (length_user < i) {
                *input_error+=1;
                if (test == 0)
                    std::cout << "Ввели = "
                         << " ожидалось = " << quote_line[i] << std::endl;
            } else if (quote_line[i] != user_string[i]) {
                input_error+=1;
                if (test == 0)
                    std::cout << "Ввели = " << user_string[i]
                         << " ожидалось = " << quote_line[i] << std::endl;
            }
        }
        if (test == 0)
            if (input_error != 0)
                std::cout << "Количество ошибок = " << input_error << std::endl;
        if (*input_error == 0) {
            if (test == 0)
                std::cout << "Поздравляю, Вы ввели всё верно!" << std::endl;
            std::ofstream fout(filename);
            for (int i = 0; i < number_citations; i++) {
                if (i == quote_number)
                    fout << array_quotes[i] << " +" << std::endl;
                else if (i == number_citations - 1)
                    fout << array_quotes[i];
                else
                    fout << array_quotes[i] << std::endl;
            }
            fout.close();
        }
} else {
        for (int i = 0; i < length_user; i++) {
            if (quote_line[i] != user_string[i]) {
                input_error+=1;
                if (test == 0)
                    std::cout << "Ввели = " << user_string[i]
                         << " ожидалось = " << quote_line[i] << std::endl;
            }
        }
        if (test == 0)
            std::cout << "Количество ошибок = " <<input_error << std::endl;
    }
}
