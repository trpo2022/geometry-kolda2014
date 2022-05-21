#include "lib.h"

void delete_array(char** array_quotes)
{
    for (int i = 0; i < number_citations; i++)
        delete[] array_quotes[i];
    delete[] array_quotes;
}
