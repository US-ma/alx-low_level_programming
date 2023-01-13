#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i = 0, co1 = 0, co2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[co1])
		co1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[co2])
		co2++;

	if (n >= co2)
		n = co2;

	con = malloc(co1 + n + 1);
	if (con == NULL)
		return (NULL);

	for (; i < (co1 + n); i++)
	{
		if (i < co1)
			con[i] = *s1, s1++;
		else
			con[i] = *s2, s2++;
	}
	con[i] = '\0';
	return (con);
}
