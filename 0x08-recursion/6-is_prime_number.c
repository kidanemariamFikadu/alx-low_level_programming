#include "main.h"

/**
 * is_prime - detects if an input is prime
 * @n: input number
 * @c: iterator
 * Return: 1 if prime 0 if not
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - return prime number
 * @n: number integer
 * Return: returns 1 when prime and 0 when not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
