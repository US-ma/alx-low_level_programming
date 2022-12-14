#include "main.h"
/**
 * print_last_digit - Function prototype
 * @n: input argument
 * Description: Funtion to print the last digit of a number
 * Return: The last digit of the the number to main
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		j =  -1 * (n % 10);
	else
		j = n % 10;
	_putchar((j % 10) + '0');
	return (j % 10);
}
