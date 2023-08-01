#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - It reverses a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
