#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @s: string input
 * Return:  void
 */

void puts_half(char *s)
{
	int c = 0, i, j;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	i = c / 2;

	for (j = i; j <= c; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
