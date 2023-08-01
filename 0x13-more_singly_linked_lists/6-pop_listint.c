#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - It deletes the head node of a
 * singly linked list of integers and returns its data.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The data stored in the head node.
 * If the linked list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	data = 0;
	if (head == NULL || *head == NULL)
		return (data);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
