#include "main.h"

/**
 * _islower: checks for lowercase character
 *  
 *  Return: 0 (Success)
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
