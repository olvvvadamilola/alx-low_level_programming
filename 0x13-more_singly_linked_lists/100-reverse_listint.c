#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head pointer
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}

	*head = previous;
	return (*head);
}
