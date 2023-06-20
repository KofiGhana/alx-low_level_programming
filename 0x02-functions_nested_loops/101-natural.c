#include <stdio.h>
/**
 * main - Function that computes and prints the sum of all the multiples
 * Return: 0
 */

int main(void)
{
	int k, sum = 0;

	for (k = 0; k < 1024; k++)
	{
		if ((k % 3) == 0 || (k % 5) == 0)
			sum += k;
	}
	printf("%d\n", sum);
	return (0);
}
