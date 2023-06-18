#include <stdio.h>
/**
 * main - Function that prints lower and uppercase alphabets
 * Return: 0
 */

int main(void)
{
	int kn;

	for (kn = 'a'; kn <= 'z'; kn++)
		putchar(kn);
	for (kn = 'A'; kn <= 'Z'; kn++)
		putchar(kn);
	putchar('\n');
	return (0);
}
