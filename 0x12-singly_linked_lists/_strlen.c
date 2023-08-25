#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[i])
		count++;
	return (count);
}
