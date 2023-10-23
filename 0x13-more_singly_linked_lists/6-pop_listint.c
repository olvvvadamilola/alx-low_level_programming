#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0); /* List is empty, return 0 */

	current = *head;    /* Save the current head node*/
	n = current->n;  /* Get the data (n) from the current head node*/
	*head = current->next;  /*Update the head pointer to the next node*/
	free(current);      /* Free the memory of the old head node */

	return (n);
}
