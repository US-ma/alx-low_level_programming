#include "main.h"

/**
 * swap_int - Function
 * @a: input argument
 * @b: input argument
 * Description: Function to swap the value of two variable
 * Return:
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
