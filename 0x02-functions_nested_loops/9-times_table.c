#include "main.h"
/**
 * times_table - nine times table
 * Return: zero
 */
void times_table(void)
{
	int n, mu, pr;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mu - 1; mu <= 9; mu++)
		{
			_putchar(',');
			_putchar(' ');

			pr = n * mu;
			if (pr <= 9)
				_putchar(' ');
			else
				_putchar((pr / 10) + '0');
			_putchar((pr % 10) + '0');
		}
		_putchar('\n');
	}
}

