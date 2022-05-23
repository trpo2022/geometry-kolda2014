#ifndef function
#define function
#include <string>

void keyboard_simulator(
        int quote_length,
        int length_user,
        std::string quote_line,
        std::string user_string,
        char** array_quotes,
        int *input_error,
        const char* filename,
        int test);
void count_lenght(
        const char* filename, char** array_quotes, int error, int test);
int length(std::string str);
std::string str_select(const char* filename);
void delete_array(char** array_quotes);
extern int quote_number;
extern int number_citations;

#endif
