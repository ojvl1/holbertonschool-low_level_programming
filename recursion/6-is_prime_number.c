#include "main.h"
<<<<<<< HEAD

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

=======
/**
 *is_prime_helper - the current divisor to test
 *@n: the number to check
 *@divisor: the current divisor to test
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{

	if (n <= 1)
>>>>>>> cd205004a862103a3b95ac9205629a6641946305
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

<<<<<<< HEAD
=======
/**
 *is_prime_number - checks if a number is prime
 *@n: the number
 *Return: is_prime_helper n, 5
 */
>>>>>>> cd205004a862103a3b95ac9205629a6641946305
int is_prime_number(int n)
{
	return (is_prime_helper(n, 5));
}
