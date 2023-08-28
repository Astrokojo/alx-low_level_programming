#include "lists.h"
/**
 * add_node - a function that adds
 * a new node at the beginning of a list_t list.
 *
 * @head: pointer to new head
 * @str: string to duplicate
 * Return: address of new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new =  malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
