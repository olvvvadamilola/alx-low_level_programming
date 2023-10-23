#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at position
 * @head: Double pointer to the head of the list
 * @idx: The index where the new node should be inserted
 * @n: The data to be stored in the new node
 * Return: A pointer to the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;       /* Initialize an index variable.*/
	listint_t *new;           /* Create a new node to insert. */
	listint_t *current;       /* Create a pointer to traverse the list. */

	if (head == NULL)         /* Check if the head pointer is NULL. */
		return (NULL);        /* Return NULL */

	new = malloc(sizeof(listint_t));  /* Allocate memory for the new node. */
	if (new == NULL)          /* Check if memory allocation failed. */
		return (NULL);        /* Return NULL, as we cannot proceed without mem*/

	new->n = n;               /* Assign the data 'n' to the new node.*/
	current = *head;

	if (idx == 0)             /* Check if the new node should be the new head.*/
	{
		new->next = current;  /*Set the new node's next pointer to the current*/
		*head = new;          /* Update the head pointer to the new node.*/
		return (new);
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)        /* Check if we reached the end of the list.*/
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
