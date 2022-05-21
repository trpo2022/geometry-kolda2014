#ifndef function
#define function
#include <string>

using namespace std;

void check_errors(
        int quote_length,
        int length_user,
        string quote_line,
        string user_string,
        char** array_quotes,
        int test);
void count_lenght(
        const char* filename, char** array_quotes, int error, int test);
int length(string str);
string str_select(const char* filename);
void delete_array(char** array_quotes);
extern int quote_number;
extern int number_citations;

#endif
