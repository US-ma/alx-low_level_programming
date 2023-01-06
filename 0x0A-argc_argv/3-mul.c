#include <stdio.h>
#include <stdlib.h>
/**
 * main- main
 * @argc: argument length
 * @argv: array
 * Return: 0 if argument passed and 1 otherwise
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a*b));
	}
	return (0);
}
