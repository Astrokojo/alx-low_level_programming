#include "main.h"


/**
 * print_rev - prints the reverse of a string
 *@s: param
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = _strlen(char *s);
	int i;


	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
