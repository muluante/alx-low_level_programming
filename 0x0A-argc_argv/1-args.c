#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments passed into it
 * @argc: count arguments
 * @argv: vector arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int n = 0;

	(void)argv;
	while (--argc)
		n++;
	printf("%i\n", n);
	return (0);
}
