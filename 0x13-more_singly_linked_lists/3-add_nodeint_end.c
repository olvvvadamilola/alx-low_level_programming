#include "lists.h"
/**
 * add_nodeint_end - adds node to end of list
 * @head: pointer to head linked list
 * @n: new node to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;

	return (new);
}
