#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits you would need to flip through numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value)
	{
		count++;
		xor_value &= xor_value - 1;
	}

	return (count);
}
