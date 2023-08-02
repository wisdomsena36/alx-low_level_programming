#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - It finds the starting node
 * of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If a loop is found, return the address
 * of the loop's starting node. Otherwise, return NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
