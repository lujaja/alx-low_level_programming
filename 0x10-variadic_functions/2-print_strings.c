#include "variadic_functions.h"

/**
 * lujaja
 * 
 * print_strings - prints a string followed by a new line.
 * 
 * @separator: A string to be printed between strings.
 * @n: Number of strings passed to the function.
 * Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list lst;
    unsigned int i;

    va_start(lst, n);
    for (i = 0; i < n; i++)
    {
        printf("%s", va_arg(lst, int));
        if (separator != NULL && i < (n - 1))
        {
            printf("%s", separator);
        }        
    }
    printf("\n");    
}
