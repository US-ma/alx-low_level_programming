#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int j;
	long int i;
	float f;

	printf("Size of char: %zu bytes(s)\n", (unsigned long) sizeof(char));
	printf("Size of int:  %zu bytes(s)\n", (unsigned long) sizeof(int));
	printf("Size of long int: %zu  bytes(s)\n",  (unsigned long) sizeof(i));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long) sizeof(j));
	printf("Size of float %lu bytes(s)\n", (unsigned long) sizeof(f));

	return (0);
}
