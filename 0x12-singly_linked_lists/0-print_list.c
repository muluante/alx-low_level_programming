#include "lists.h"
/**
 * print_list - elements of a list printed
 * @h: the pointer to the struct
 * Return: number of nodes return
 */
size_t print_list(const list_t *h)
{
	int nNode = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n_Node++;
		h = h->next;
	}
	return (numb_node);
}
