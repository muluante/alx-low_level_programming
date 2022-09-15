#include<stdio.h>
#include "main.h"

/**
 * print_numbers - function print all numbers
 * Return: returns nothing
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar(10);
}
