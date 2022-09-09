#include <stdio.h>
/**
 * main - Entry point
 * Return: zero seccess
 */
int main(void)
{
	int i, c;

	for (i = 0; i < 100; i++)
	{
		for (c = 0; c < 100; c++)
		{
			if (c > i)
			{

				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
