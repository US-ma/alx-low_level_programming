#include <stdlib.h>
#include "main.h"

/**
 * create_array - A Function to create array
 * description: function to create array
 * @size: size of array
 * @c: charater to assign
 * Return: populated array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	p = malloc(size * sizeof(char));
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for ( ; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
