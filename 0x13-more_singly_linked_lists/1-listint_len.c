#include "lists.h"

/**
 * list_len- returns the number of elements of a linked listint_t list
 * @h: pointer to head
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
