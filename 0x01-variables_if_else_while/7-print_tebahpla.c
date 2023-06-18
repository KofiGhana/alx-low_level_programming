#include <stdio.h>
/**
 * main - Function that prints lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char kn;

	for (kn = 'z'; kn >= 'a'; kn--)
	{
		putchar(kn);
	}
	putchar('\n');
	return (0);
}
