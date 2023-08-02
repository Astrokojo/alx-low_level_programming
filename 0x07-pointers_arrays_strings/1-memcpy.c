#include "main.h"

/**
 * _memcpy-does the same thing as memcpy
 * @dest: pointer to dest
 * @src: constant byte
 * @n: bytes of the memory pointed to by dest
 * Return: returns char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}
