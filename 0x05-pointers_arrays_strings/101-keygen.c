#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password generator
 * Return: zero
 */

int main(void)
{
	int a, b;

	srand(time(NULL));
	b = 0;

	while (b <= 2645)
	{
		a = (rand() % 128);
		b += a;
		printf("%c", a);
	}
	printf("%c", 2772 - b);

	return (0);
}
