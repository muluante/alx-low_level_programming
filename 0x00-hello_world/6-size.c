#include <stdio.h>

/**
 * main - print the string in the put function
 * Description: using the main function
 * this program prints prints the size of various types on the computer
 * Return: zero
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %ld byte(s)\n",sizeof(a));
	printf("Size of an int: %ld byte(s)\n",sizeof(b));
	printf("Size of a long int: %ld byte(s)\n",sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(d));
	printf("Size of a float: %ld byte(s)\n",sizeof(e));
	return (0);
}
