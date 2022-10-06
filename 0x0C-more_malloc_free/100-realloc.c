#include "main.h"

/**
 * _realloc - re-assign a memory block using malloc and free
 * @ptr: pointer input
 * @old_size: size of prev pointer
 * @new_size: size of new pointer
 * Return: re-assigned pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a = NULL;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		a = malloc(new_size);
		return (a);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	_memcpy(a, ptr, old_size);
	free(ptr);
	return (a);
}

/**
 * _memcpy - memory area copies
 * @dest: destination
 * @src: source
 * @n: number of be copied
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pt = dest;

	while (n--)
		*dest++ = *src++;
	return (pt);
}
