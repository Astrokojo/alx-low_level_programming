#include "lists.h"
#include <stdio.h>
/**
 * add_node - a function that adds
 * a new node at the beginning of a list_t list.
 *
 * @head: pointer to new head
 * @str: string to duplicate
 * Return: address of new element, NULL if failed
 */
size_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new =  (list_t)malloc(sizeof(struct list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(len);
	new->next = *head;
	*head = new;
	return (new);
}
