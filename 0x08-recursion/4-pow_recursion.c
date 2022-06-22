#include "main.h"

/**
 * _pow_recursion - calculates x power y
 * @x: inbut for the base
 * @y: input for the power
 * Return: power of x and y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
