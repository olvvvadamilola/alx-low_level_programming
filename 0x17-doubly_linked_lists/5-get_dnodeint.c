#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: index of node
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (n == index)
			return (node);
		node = node->next;
		n++;
	}
	return (NULL);
}
