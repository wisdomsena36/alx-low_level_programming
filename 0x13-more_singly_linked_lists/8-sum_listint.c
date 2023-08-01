#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - It returns the sum of all the
 * integers in a singly linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the data in the linked list.
 * If the linked list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
