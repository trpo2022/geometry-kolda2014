#include "libKeyboardNinja/lib.h"
#include <iostream>

int number_citations = 10;

using namespace std;

int main()
{
    char** array_quotes;
    array_quotes = new char*[number_citations];
    int file_error = 0;
    count_lenght("Quotes.txt", array_quotes, file_error, 0);
    string quote_line, user_string;
    int quote_length, length_user;
    quote_line = str_select("Quotes.txt");
    cout << quote_line << endl;
    getline(cin, user_string);
    quote_length = length(quote_line);
    length_user = length(user_string);
    check_errors(
            quote_length,
            length_user,
            quote_line,
            user_string,
            array_quotes,
            0);
    delete_array(array_quotes);
    return 0;
}
