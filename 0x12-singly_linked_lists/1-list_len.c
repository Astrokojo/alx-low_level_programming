#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 *
 * @h: pointer to head of node
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
