#include "main.h"

/**
 * print_triangle - prints triangles
 *
 * @n: determines the size of the triangle
 * Returen: void
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < (n - i); j++)
			_putchar(' ');
		for (j--; j < n; j++)
			_putchar(35);
		if (i < (n - 1))
			_putchar('\n');
	}
}
