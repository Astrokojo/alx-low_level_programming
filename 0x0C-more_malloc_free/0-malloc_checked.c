#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc , if error exit is 98 
 * @b: the memory allocated by malloc
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
