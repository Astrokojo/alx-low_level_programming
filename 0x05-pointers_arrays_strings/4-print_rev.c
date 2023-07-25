#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
	_putchar('\n');
}
