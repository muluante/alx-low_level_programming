#include <stdio.h>

/**
 * main - code that print either number
 * or fizz or buzz
 * Return: zero
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
