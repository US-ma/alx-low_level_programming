#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to return pointer to allocated memory
 * @b: variable of byte to be allocated
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
