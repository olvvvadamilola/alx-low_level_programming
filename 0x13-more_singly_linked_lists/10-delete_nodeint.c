#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index to be deleted
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *tmp;

	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{

		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index)
	{
		if (current == NULL  || current->next == NULL)
			return (-1);

		tmp = current;
		current = current->next;
		i++;
	}


	tmp->next = current->next;
	free(current);
	return (1);
}
