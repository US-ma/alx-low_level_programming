#include "main.h"
/**
 * _islower - void function
 * @c: input argument
 * Description: The function return 0 if lowercase and 1 if uppercase
 * Return: 0 or 1
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
