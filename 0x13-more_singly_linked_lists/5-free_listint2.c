#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
