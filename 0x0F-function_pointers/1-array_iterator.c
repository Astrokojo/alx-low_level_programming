#include <stdio.h>

/**
 * array_iterator - executes function given as param on i of arr[i].
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (!array || !action)
		return;

	while (size--)
		action(*array++);
}
