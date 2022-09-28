#include "mainn.h"

/**
 * _strlen_recursion - returns the string length
 * @s: the input string
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * isPalRec - function for is_palindrome
 * @str: the input string
 * @s: initial index
 * @e: last index
 * Return: 1 if true, 0 if false
 */
int isPalRec(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * @s: the input string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (isPalRec(s, 0, len));
}
