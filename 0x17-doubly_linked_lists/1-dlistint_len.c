#include "lists.h"

/**
 * dlistint_len - It returns length of dlist.
 * @h: Address of head node.
 *
 * Return: Size of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
