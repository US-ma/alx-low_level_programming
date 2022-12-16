#include "main.h"

/**
 * print_numbers - Function
 * Description: Function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return:
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
