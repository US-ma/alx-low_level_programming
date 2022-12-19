#include "main.h"

/**
 * rev_string -  Function
 * Description: Function to print a string in reverse
 * @s: input string
 * Return:
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;
	while(i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
