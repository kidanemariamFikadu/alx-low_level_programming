#include "main.h"

/**
 * print_line - prints straight line
 *
 * @n: input as number of _
 * Return: void
 */
void print_line(int n)
{
	for ( ; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
