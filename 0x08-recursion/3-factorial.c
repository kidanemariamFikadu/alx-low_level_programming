#include "main.h"

/**
 * factorial - calculate factorial n
 * @n: input int
 * Return: return factorial of n
 */
int factorial(n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n *factorial(n - 1));
}
