#include "main.h"

/**
 * print_alphabet - print all lowercase alphabet
 * Return: void
 */

void print_alphabet(void)
{
	int b;

	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
