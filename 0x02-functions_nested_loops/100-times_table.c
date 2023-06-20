#include "main.h"
/**
 * print_times_table - Function that prints the n times table
 * @n: The times table number
 * Return: 0
 */

void print_times_table(int n)
	{
		int k, a, m;


		if (n >= 0 && n <= 15)
		{
			for (k = 0; k <= n; k++)
			{
				for (a = 0; a <= n; a++)
				{
					m = a * k;
					if (a == 0)
					{
						_putchar(m + '0');
					} else if (m < 10 && a != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(m + '0');
					} else if (m >= 10 && m < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((m / 10) + '0');
						_putchar((m % 10) + '0');
					} else if (m >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((m / 100) + '0');
						_putchar(((m / 10) % 10) + '0');
						_putchar((m % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
