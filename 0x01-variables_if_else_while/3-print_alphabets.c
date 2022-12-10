#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascii = 97, cap = 65;

	while (ascii < 123)
	{
		putchar(ascii);
		ascii = ascii + 1;
	}
	while (cap < 91)
	{
		putchar(cap);
		cap = cap + 1;
	}
	putchar(10);
	return (0);
}
