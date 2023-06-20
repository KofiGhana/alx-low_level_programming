#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * @n: Checked the number
 * Return: 1 for positive num, -1 for negative num or 0 for otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
