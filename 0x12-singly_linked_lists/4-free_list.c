#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
