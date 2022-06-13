#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @s: string input
 * Return:  void
 */

void puts_half(char *s)
{
	int c = 0, i;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	if (c % 2 == 1)
		i = c / 2;
	else
		i = (c - 1) / 2;

	for (i++; i < c; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
