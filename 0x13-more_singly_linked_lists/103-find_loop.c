#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *miranda, *vzla;

	if (head == NULL)
		return (NULL);

	miranda = vzla = head;

	while (miranda && vzla && vzla->next)
	{
		miranda = miranda->next;
		vzla = vzla->next->next;

		if (miranda == vzla)
		{
			miranda = head;

			while (miranda != vzla)
			{
				miranda = miranda->next;
				vzla = vzla->next;
			}

			return (miranda);
		}
	}

	return (NULL);
}
