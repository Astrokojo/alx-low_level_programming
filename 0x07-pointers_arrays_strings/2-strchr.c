#include "main.h"

/**
 * _strchr -does the same thing as strchr
 * @s: pointer to char c
 * @c: char c
 * Return: returns char
 */
char *_strchr(char *s, char *c)
{
	int i;

	while (i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			return (0);
	}
}
