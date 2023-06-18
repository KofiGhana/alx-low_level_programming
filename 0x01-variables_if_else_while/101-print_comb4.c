#include <stdio.h>
/**
 * main - Function that prints possible different combo of three digits
 * Return: 0
 */

int main(void)
{
	int k, n, l;

	for (k = 48; k < 58; k++)
	{
		for (n = 49; n < 58; n++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > n && n > k)
				{
					putchar(k);
					putchar(n);
					putchar(l);
					if (k != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
