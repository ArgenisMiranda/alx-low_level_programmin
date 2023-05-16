#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
