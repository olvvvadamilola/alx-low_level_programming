#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: double pointer to head
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
