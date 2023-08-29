#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @n:node
 * @head: head
 * Return:address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	if (head != NULL)
		return (&n);
	else
		return (NULL);
}
