#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the head of linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	register unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
