#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_for_loop - It checks if a linked list contains a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the list contains a loop, returns
 * the loop's starting node. Otherwise, returns NULL.
 */
const listint_t *check_for_loop(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);
	}

	return (NULL);
}

/**
 * print_listint_safe - It prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_start;
	size_t count = 0;

	loop_start = check_for_loop(head);

	if (loop_start == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		do {
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		} while (head != loop_start);
		printf("-> [%p] %d\n", (void *)loop_start,
				loop_start->n);
		exit(98);
	}

	return (count);
}
