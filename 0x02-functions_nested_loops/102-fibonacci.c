#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int k;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (k = 0; k < 50; k++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (k == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
