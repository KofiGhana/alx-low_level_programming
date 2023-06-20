#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int k, n, a, m;

	for (k = 0; k <= 2; k++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((k <= 1 && n <= 9) || (k <= 2 && n <= 3))
			{
				for (a = 0; a <= 5; a++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(k + '0');
						_putchar(n + '0');
						_putchar(58);
						_putchar(a + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
