#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: node to get
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
