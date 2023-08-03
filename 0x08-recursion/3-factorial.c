#include "main.h"

/**
 * factorial - creates a factorial
 * @n: param
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
