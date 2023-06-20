#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: Extraction of the int last digit
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
		n = -n;

	k = n % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}


