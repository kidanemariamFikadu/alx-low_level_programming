#include "main.c"

/**
 * print_diagonal - prints space and diagonal
 *
 * @n: input number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	for ( ; n > 0; n--)
	{
		_putchar(" ");
	}
	_putchar(92);
	_putchar('\n');
}
