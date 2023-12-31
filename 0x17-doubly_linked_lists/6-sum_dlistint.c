#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t L list
 * @head: head of the list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
