#include "lists.h"

/**
 * sum_dlistint - It sums the values of a dlist.
 * @head: pointer to current head.
 *
 * Return: Sum of values.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
