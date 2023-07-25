include "main.h"

/**
 * swap_int- swaps the values of two integers
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tempStore = *a;
	*a = *b;
	*b = tempStore;
}
