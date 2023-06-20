#include <stdio.h>
/**
 * main - Function that prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
        int k;
        unsigned long fib1 = 0, fib2 = 1, sum;

        for (k = 0; k < 50; k++)
        {
                sum = fib1 + fib2;
                printf("%lu", sum);

                fib1 = fib2;
                fib2 = sum;

                if (k == 49)
                        printf("\n");
                else
                        printf(",");
        }
        return (0);
}
