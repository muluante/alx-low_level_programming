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

	int num;

	strand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
		printf("%d is Posetive\n", num);
	else if (num < 0)
		printf("%d is Negative\n", num);
	else
		printf("%d is Zero\n", num);
	return (0);
}
