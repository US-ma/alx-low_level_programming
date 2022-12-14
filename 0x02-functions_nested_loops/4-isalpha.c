#include "main.h"
/**
 * _isalpha - Function
 * @c: Argument for function
 * Description: function return 1 if character is
 * a letter, lowercase or uppercase.
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	char lower, upper;
	int alpha = 0;

	for (lower = 'a'; lower <= 'z';  lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				alpha = 1;
		}
	}
	return (alpha);
}
