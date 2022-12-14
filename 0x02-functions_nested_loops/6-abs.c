#include "main.h"
/**
 *_abs - Function to print absolute value
 * @n:  input argument
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
