#include "main.h"

/**
 * print_triangle - prints triangles
 *
 * @n: determines the size of the triangle
 * Returen: void
 */
void print_triangle(int n)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < n; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar(35);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
