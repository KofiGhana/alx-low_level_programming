#include <stdio.h>
/**
 * main - Function that prints possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int k, n;

	for (k = 48; k <= 56; k++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > k)
			{
				putchar(k);
				putchar(n);
				if (k != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
