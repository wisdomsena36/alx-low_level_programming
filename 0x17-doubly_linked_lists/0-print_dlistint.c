#include "lists.h"

/**
 * print_dlistint - It prints doubly-linked list.
 * @head: Address of head node.
 *
 * Return: Size of list.
 */
size_t print_dlistint(dlistint_t *head)
{
	size_t i = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
