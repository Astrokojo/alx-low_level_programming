#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at
 * the given postion(n) of a listint_t list
 * @n:node
 * @head: pointer to head of list's node
 * @idx: index of list
 *
 * Return:address of new element or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp_node;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp_node = *head;

	for (count = 0; count < idx - 1; count++)
	{
		if (temp_node == NULL)
		{
			free(new);
			return (NULL);
		}
		temp_node = temp_node->next;
	}

	new->next = temp_node->next;
	temp_node->next = new;

	return (new);

}
