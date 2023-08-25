#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to head of node
 * Return: [0] (nil) is str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n")
		h = h->next;
		count++;
	}
	return (count);
}
