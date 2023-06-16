#include <stdio.h>
/**
 * main - A program that print the size of various computer types
 * Return: 0
 */
int main(void)
{
char k;
int n;
long int a;
long long int b;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);

}