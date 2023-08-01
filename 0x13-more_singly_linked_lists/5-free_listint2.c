#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - It frees a singly linked list
 * of integers and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}
