#include "main.h"
/**
 * main - Function to determine if a number
 * is positive, negative or zero
 * 0 : Number to be checked
 * Return: 0
 */

void positve_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
return;
}
