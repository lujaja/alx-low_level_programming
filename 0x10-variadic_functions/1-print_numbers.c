#include "variadic_functions.h"

/**
 * lujaja
 * 
 * print_number - print number follwed by a new line
 * 
 * @seperator: string to be printed between number.
 * @n: number of integers passed to the function.
 * Return : Nothing.
 * 
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list lst;
    unsigned int i;

    va_start(lst, n);
    for ( i = 0; i < n; i++)
    {
        printf("%d", va_arg(lst, int));
        if (separator != NULL && i < (n - 1))
            printf("%s", separator);
    }
    printf("\n");
}