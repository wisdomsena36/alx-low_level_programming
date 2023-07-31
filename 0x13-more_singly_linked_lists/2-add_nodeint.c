#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning
 * of a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer to be added as the new node.
 *
 * Return: A pointer to the newly added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
