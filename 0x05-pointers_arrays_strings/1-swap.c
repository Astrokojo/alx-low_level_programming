#include "main.h"

/**
 * swap_int- swaps the values of two integers
 *
 *@a: first interger to be swapped
 *@b: second integer to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tempStore = *a;
	*a = *b;
	*b = tempStore;
}
