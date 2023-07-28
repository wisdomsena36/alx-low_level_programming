#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It frees a singly linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
