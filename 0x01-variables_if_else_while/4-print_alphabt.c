#include <stdio.h>
/**
 * main - Function that prints alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char kn = 'a';

	while (kn <= 'z')
	{
		if (kn != 'e' && kn != 'q')
		{
			putchar(kn);
		}
		kn++;
	}
	putchar('\n');
	return (0);
}
