#include <stdio.h>
/**
 * main - Function that prints possible combinations of single digit
 * Return: 0
 */

int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
