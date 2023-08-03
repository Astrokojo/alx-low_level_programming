#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: pointer variable
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
