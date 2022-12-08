#include "lists.h"

/**
 *get_dnodeint_at_index - locates a node
 *@head: The head
 *@index: The node to search
 *
 *Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
