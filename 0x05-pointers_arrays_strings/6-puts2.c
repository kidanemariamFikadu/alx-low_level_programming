#include "main.h"

/**
 * puts2 - prints every other character
 * @s: string input
 */

void puts2(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		if ((c % 2) == 0)
			_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
