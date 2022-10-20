#include "lists.h"

/**
 *print_list - linked list printed
 *@h: the linked list head
 *Return: the number of node
 */
size_t print_list(const list_t *h)
{


	int len = 0;

	while (h)
	{
		(!h->str)
			? printf("[0] (nil)\n")
			: printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);

}
