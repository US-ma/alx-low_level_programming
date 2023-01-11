#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *ns, *s;
	int i = 0, count = 0;

	if (str == NULL)
		return (NULL);

	s = str;

	while (*str)
	{
		count++;
		str++;
	}

	str = s;
	ns = malloc(sizeof(char) * (count + 1));
	s = ns;

	if (ns != NULL)
	{
		for (; i < count; i++)
		{
			ns[i] = *str;
			str++;
		}
		ns[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}
