#include <stdio.h>
/**
 * main - Function that prints possible combo of two two digits
 * Return: 0
 */

int main(void)
{
	int k, n;

	for (k = 0; k < 100; k++)
	{
		for (n = 0; n < 100; n++)
		{
			if (k < n)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (k != 98 || n != 99)
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
