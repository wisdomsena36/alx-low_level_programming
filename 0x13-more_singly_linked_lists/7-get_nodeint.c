#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - It returns the nth node
 * of a singly linked list of integers.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be returned.
 *
 * Return: If the node does not exist, returns NULL.
 * Otherwise, returns a pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
