#include <stdio.h>
#include "main.h"
/**
 * main - main
 * @argc: argument
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
