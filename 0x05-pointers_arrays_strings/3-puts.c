#include "main.c"

/**
 * _puts - prints strings
 * @s: string input
 * Return: void
 */

void _puts(*s)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		count++;
	}
}
