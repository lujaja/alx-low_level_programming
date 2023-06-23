#include "variadic_functions.h"

/**
 * lujaja
 * 
 * sum_them_all - Function that returns the sum of all its parametrs.
 * 
 * @n: Number of arguments.
 * Return: sresult of sum
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list lst;
    int i, sam = 0;

    if (n == 0)
        return (0);    
    va_start(lst, n);
    for ( i = 0; i < n; i++)
        sam += va_arg(lst, int);
    va_end(lst);
    
    return (sam);
}