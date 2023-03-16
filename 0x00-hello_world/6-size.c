#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 always (succuss)
 */
int main(void)
{
int q = 9;
double a;
float b;
char c;

printf("the total size of variable q is equal to %d\n", sizeof(q));
printf("the tatal size of double a is %d\n", (unsigned)sizeof(a));
printf("the total size of float b is %d\n", (unsigned)sizeof(b));
printf("the total size of char c is %d\n", (unsigned)sizeof(c));
return (0)
}
