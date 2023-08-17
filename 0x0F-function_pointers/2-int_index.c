#include <stdio.h>

/**
 * int_index - function searches for an integer
 *@array: array
 * @size: number of elems in arr
 * @cmp: pointer to function that does calue comparison
 * Return: index of first elem for which cmp fctn !return 0
 * if no elem matches return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (!array || size <= 0 || !cmp)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
