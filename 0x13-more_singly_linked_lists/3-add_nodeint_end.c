#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - It adds a new node at the end
 * of a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer to be added as the new node.
 *
 * Return: A pointer to the newly added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
