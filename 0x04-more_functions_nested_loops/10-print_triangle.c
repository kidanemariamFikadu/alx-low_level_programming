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

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
			_putchar(' ');
		for(k = 0; k < i; k++)
			_putchar(35);
		_putchar('\n');
	}
}
