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

for (n = 0; b && *b; b++)
{
if (*b != 0 && *b != 1)
return (0);

num <<= 1;
num += *b - 0;
}
return (num);
}