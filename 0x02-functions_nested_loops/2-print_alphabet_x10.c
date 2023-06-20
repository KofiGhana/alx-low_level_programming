#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet
 * in lowercase with a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char kn;
	int j;

	j = 0;

	while (j < 10)
	{
		kn = 'a';
		while (kn <= 'z')
		{
			_putchar(kn);
			kn++;
		}
		_putchar('\n');
		j++;
	}
}
