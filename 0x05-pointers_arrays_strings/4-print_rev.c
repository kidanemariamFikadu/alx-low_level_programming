#include "main.h"

/**
 * print_rev - print reverse text
 * @s: string input
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}

	for (c--; c >= 0; c--)
		_putchar(s[count]);
	_putchar('\n');
}
