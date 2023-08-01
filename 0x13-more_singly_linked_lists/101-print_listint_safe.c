#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list (handles loops).
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			/* List contains a loop, break the loop to avoid infinite loop */
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}
		count++;
	}

	if (slow != fast)
	{
		/* List does not contain a loop, continue printing */
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
	}
	else
	{
		/* List contains a loop, stop printing to avoid infinite loop */
		listint_t *loop_start = (listint_t *)slow;
		do
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		} while (slow != loop_start);
		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);

		/* Exit the program with status 98 on failure */
		exit(98);
	}

	return (count);
}
