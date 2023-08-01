#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - It inserts a new node at a
 * given position in a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index of the node where the new node should be inserted.
 * @n: The integer to be added as the new node.
 *
 * Return: If the function fails, returns NULL.
 * Otherwise, returns a pointer to the newly added node.
 * If the position is out of range, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	count = 0;
	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}

		tmp = tmp->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
