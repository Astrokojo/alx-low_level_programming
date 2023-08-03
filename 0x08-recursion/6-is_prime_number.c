#include "main.h"

/**
 * _primus - helper function for is_prime
 * @n: number
 * @i: incremental
 *
 * Return: 1 if n is prime number else 0
 */
int _primus(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_primus(n, i + 1));
}

/**
 * is_prime_number - returns 1 for prime number. 0 for anything else
 * @n: number
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_primus(n, 2));
}
