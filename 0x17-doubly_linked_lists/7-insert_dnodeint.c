#include "lists.h"

/**
 *insert_dnodeint_at_index - Adds a new node
 *@h: A pointer to the head
 *@idx: The position to insert new node
 *@n: The integer for the new node
 *
 * Return: Null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp;
	tmp->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
