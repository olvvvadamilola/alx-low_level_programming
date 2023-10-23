#include "lists.h"
/**
 * sum_listint - sum of data(n) of a linked list
 * @head: head pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
