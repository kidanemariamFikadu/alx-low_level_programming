#include "main.h"

/**
 * _abs - prints the sign of integer
 *
 * @n: the integer input
 * Return: always 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
}
