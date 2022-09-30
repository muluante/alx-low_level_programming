#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes an integer arguments and returns the result
 * @argc: arguments
 * @argv: name of array
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, length, c;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		c = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			c += atoi(argv[a]);
		}

	printf("%d\n", c);
	}
	return (0);
}
