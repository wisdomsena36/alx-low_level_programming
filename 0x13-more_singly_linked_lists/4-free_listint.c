#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - It frees a singly linked list of integers.
 * @head: A pointer to the head of the linked list.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
