#include "lists.h"

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_len - counts unique node
 * @head: A pointer to the head
 *
 * Return: 0 or no of looped list
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				node++;
				a = a->next;
				b = b->next;
			}

			a = a->next;
			while (a != b)
			{
				node++;
				a = a->next;
			}

			return (node);
		}

		a = a->next;
		b = (b->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of node in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = loop_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
