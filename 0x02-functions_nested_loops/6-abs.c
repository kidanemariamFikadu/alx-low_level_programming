#include "main.h"

/**
 * _abs - returns the absolute value of integer
 *
 * @n: the interger input
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
