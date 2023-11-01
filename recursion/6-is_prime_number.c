#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * @divisor: the current divisor to test
 * is_prime_helper: to check for prime numbers whiout loops
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int divisor);
{
	if (n <= 1)

	{
		return (0);
	}

	else if (n <= 3)
	{
		return (1);
	}

	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	else if (divisor * divisor > n)
	{
		return (1);
	}

	else if (n % divisor == 0 || n % (divisor + 2) == 0)
	{
		return (0);
	}

	else
	{
		return (is_prime_helper(n, divisor + 6));
	}
}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 5));
}
