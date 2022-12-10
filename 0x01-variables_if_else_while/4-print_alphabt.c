#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascii = 97;

	while (ascii < 123)
	{
		if (ascii == 101 || ascii == 113)
		{
			ascii++;
			continue;
		} else
		{
		putchar(ascii);
		ascii = ascii + 1;
		}
	}
	putchar(10);
	return (0);
}
