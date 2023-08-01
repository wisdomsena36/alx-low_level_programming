#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - It prints a singly linked
 * list of integers, even if it has a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	size_t count;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
	}

	if (!slow || !fast || !fast->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
