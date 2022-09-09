/*
 * File: 0-posetive_or_negative.c
 *
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints a random number
 * Return: always zero
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is Posetive\n", n);
	else if (n < 0)
		printf("%d is Negative\n", n);
	else
		printf("%d is Zero\n", n);
	return (0);
}
