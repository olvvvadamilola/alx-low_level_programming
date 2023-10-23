#include "lists.h"

/**
 * print_listint - prints all the elements of a linked listint_t
 * @h: head of the linked list
 * Return: No of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
