#include "main.h"

/**
 * _memset-does the same thing as memset
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory pointed to by s
 * Return: returns char
 */
char *_memset(char *s, char b, unsigned int n)
{
	while(n--)
		s[n] = b;
	return(s);
}
