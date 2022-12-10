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
		
		putchar(ascii);
		ascii = ascii + 1;
	}
	putchar(10);
	return (0);
}
