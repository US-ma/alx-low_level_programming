#include "main.h"
#include <stdio.h>

/**
 * print_array - Function
 * Description: Fuction that prints n elements of an array of integers,
 * followed by a new line.
 * @a:  input array
 * @n:  input integer
 * Return:
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
