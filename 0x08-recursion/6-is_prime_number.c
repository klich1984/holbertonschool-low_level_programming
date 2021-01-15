#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @count: variable counter
 *
 * @n: integre n
 *
 * Return: 1 or 0
 */

int searchPrime(int n, int count);

int is_prime_number(int n)
{
	return (searchPrime(n, 2));
}

/**
 * searchPrime - function that search number prime
 *
 * @n: integre n
 *
 * @count: variable counter
 *
 * Return: 1 or 0
 */

int searchPrime(int n, int count)
{
	if (n % count == 0 || n < 2)
	{
		return (0);
	}

	if (count > n / 2)
	{
		return (1);
	}

	return (searchPrime(n, count + 1));
}
