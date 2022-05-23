#include "libKeyboardNinja/lib.h"
#include <ctest.h>
#include <string>

int number_citations = 10;

CTEST(ctest, String_length_count_check)
{
    char a[6] = {'R', 'u', 's', 's', 'i', 'a'};
    int res = 0;
    res = length(a);
    ASSERT_EQUAL(6, res);
}

CTEST(ctest, Validation_of_input)
{
    int file_error = 0;
    int input_error = 0;
    char** array_quotes;
    array_quotes = new char*[number_citations];
    count_lenght("Quotestest.txt", array_quotes, file_error, 1);
    std::string quote_line, user_string;
    int quote_length, length_user;
    quote_line
            = {'B', 'l', 'a', ' ', 'b', 'l', 'a', ' ', 'b', 'l', 'a'};
    user_string
            = {'B', 'l', 'a', ' ', 'b', 'l', 'a', ' ', 'b', 'l', 'a'};
    quote_length = length(quote_line);
    length_user = length(user_string);
    keyboard_simulator(
            quote_length,
            length_user,
            quote_line,
            user_string,
            array_quotes,
            &input_error,
            "Quotestest.txt",
            1);
    ASSERT_EQUAL(0, input_error);
    delete_array(array_quotes);
}

CTEST(ctest, Invalid_string_input)
{
    int file_error = 0;
    int input_error = 0;
    char** array_quotes;
    array_quotes = new char*[number_citations];
    count_lenght("Quotestest.txt", array_quotes, file_error, 1);
    std::string quote_line, user_string;
    int quote_length, length_user;
    quote_line
            = {'B', 'l', 'a', ' ', 'b', 'l', 'a', ' ', 'b', 'l', 'a'};
    user_string
            = {'B', 'l', 'a', ' ', 'b', 'l', 'a', ' ', 'b', 'l', 'a'};
    quote_length = length(quote_line);
    length_user = length(user_string);
    keyboard_simulator(
            quote_length,
            length_user,
            quote_line,
            user_string,
            array_quotes,
            &input_error,
            "Quotestest.txt",
            1);
    ASSERT_EQUAL(0, input_error);
    delete_array(array_quotes);
}
