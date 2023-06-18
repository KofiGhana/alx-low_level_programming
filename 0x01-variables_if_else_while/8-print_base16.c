#include <stdio.h>
/**
 * main - Function that prints base 16 numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int g;
	char kn;

	for (g = 48; g < 58; g++)
	{
		putchar(g);
	}
	for (kn = 'a'; kn <= 'f'; kn++)
	{
		putchar(kn);
	}
	putchar('\n');
	return (0);
}
