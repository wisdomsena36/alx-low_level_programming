#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes a node at a given
 * position in a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: If successful, returns 1.
 * Otherwise, returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *prev;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	count = 0;
	while (tmp != NULL)
	{
		if (count == index)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}

		prev = tmp;
		tmp = tmp->next;
		count++;
	}

	return (-1);
}
