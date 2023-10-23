#include "lists.h"
/**
 * free_listint - fn to free list
 * @head: pointer to head
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
