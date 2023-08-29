#include "lists.h"

/**
 * pop_listint - deletes head node and returns the head node's data(n)
 * @head: pointer to list's head
 *
 * Return: head node's data (n), else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n;

	if (!*head)
		return (0);
	temp_node = *head;
	n = temp_node->n;
	*head = (*head)->next;
	free(temp_node);
	return (n);
}
