#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function
 * @n: variable argument
 * Description: prints times table of number less than 15 but greater than 0
 * Return:
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k > 9 && k <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(k / 10 % 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
