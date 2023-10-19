#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the linked list
 *
 * Return: No of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
