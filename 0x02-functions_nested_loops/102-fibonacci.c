#include <stdio.h>

/**
  * main - entry point
  *
  * Return: nothing
  */

int main(void)
{
	long num1 = 1,num2 = 2;
	int i;

	while (i < 50)
	{
		if (i == 0)
			printf("%d ", num1);
		else if (i == 1)
			printf(", %d", num2);
		else
		{
			num2 += num1;
			num1 = num2 - num1;
			printf(", %d", num2;
		}
		++i;
	}
	printf("\n");
	return (0);
}
