#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: return  0 always (succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10
	/* your code goes there */
	if (n > 5)
		printf("the last digit of %d is %d and is greater than 5\n", m, n);
	else if (n == 0)
		printf("the last digit of %d is %d and is 0\n",m, n);
	else
		printf("the last digit of %d is %d and is less than 6 and not 0\n",m, n);
	return (0);
}
