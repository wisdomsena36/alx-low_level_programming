#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - It frees dlistint_t list.
 * @head: Head of linked list.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
