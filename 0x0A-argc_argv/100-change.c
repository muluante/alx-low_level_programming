#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the min numbers of cents per given ammount of money.
 * @argc: arguments.
 * @argv: vector argument
 *
 * Return: 0 for success 1 for failure.
 */
int main(int argc, char **argv)
{
	int cent, a, amt;
	int value[5] = {25, 10, 5, 2, 1};

	cent = 0;
	amt = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amt <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (a = 0; a < 5; a++)
		{
			if (value[a] <= amt)
			{
				cent = cent + (amt / value[a]);
				amt = amt - (amt / value[a]) * value[a];
				if (amt == 0)
				{
					printf("%d\n", cent);
					break;
				}
			}
		}
	}
	return (0);
}
