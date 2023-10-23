#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer to list
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *current = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			return (counter);
			exit(98);
		}

		current = current->next;
	}
	return (counter);
}
