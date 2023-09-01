#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if invalid input  is found
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	
	if (!b)
		return (0);
	
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		n = (n << 1) | ([b[i] - '0');
	}
	
	return (n);

}
