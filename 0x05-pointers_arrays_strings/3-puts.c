#include "main.h"

/**
 * _puts - prints strings
 * @s: string input
 * Return: void
 */

void _puts(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[a]);
		count++;
	}
}
