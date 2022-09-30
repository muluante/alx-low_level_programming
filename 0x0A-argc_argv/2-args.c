#include <stdio.h>
#include "main.h"

/**
 * main - Print arguments passed to main func
 * @argc: arguments
 * @argv: name of array
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
