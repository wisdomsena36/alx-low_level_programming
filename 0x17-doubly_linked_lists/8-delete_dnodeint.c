#include "lists.h"

/**
 * delete_dnodeint_at_index - It deletes node at given index.
 * @head: The address of pointer to current head node.
 * @index: The index to insert at.
 *
 * Return: 1 on success or -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;

	if (!head)
		return (-1);

	node = *head;
	if (!index)
	{
		if (!node)
			return (-1);
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	for (; node; node = node->next, index--)
	{
		if (index - 1 == 0)
		{
			tmp = node->next;
			if (!tmp)
				break;
			node->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = node;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
