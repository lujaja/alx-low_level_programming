#include "variadic_functions.h"

/**
 * lujaja
 * 
 * print_all - prints anything.
 * 
 * @format: list of types of arguments passed to the function.
 * Return: Nothing.
*/

void print_all(const char * const format, ...)
{
    va_list any;
    char *str, *sep = "";
    int i = 0;

    va_start(any, format);
    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
            case 'c':
                printf("%s%c", sep, va_arg(any, int));
                break;
            case 'i':
                printf("%s%d", sep, va_arg(any, int));
                break;
            case 'f':
                printf("%s%f", sep, va_arg(any, double));
                break;
            case 's':
                str = va_arg(any, char *);
                if (!str)
                    printf("(nil)");
                printf("%s%s", sep, str);
            default:
                break;
            }
            sep = " ";
            i++;
        }
        printf("\n");             
    }    
}