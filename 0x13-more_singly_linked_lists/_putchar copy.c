#include "lists.h"
#include <unistd.h>
/**
 * Author Lujaja
 * _putchar - putchar function
 * @c: character to print
 * Return: 0 always success
*/
int _putchar(char c)
{
    write(1, &c, 1);
    return (0);
}