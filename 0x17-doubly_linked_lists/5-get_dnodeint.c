#include "lists.h"

/**
 * get_dnodeint_at_index - It returns node at given index.
 * @head: Pointer to current head node.
 * @index: Index of node to return
 *
 * Return: Address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
