#include "lists.h"

/**
 * get_nodeint_at_index - prints the nth node in a linked list
 * @head: pointer to head
 * @index: index of list
 *
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
