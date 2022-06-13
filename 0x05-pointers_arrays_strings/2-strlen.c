#include "main.h"

/**
 * _strlength - gets string length
 * @s: string input
 * Return: integer
 */

int _strlength(char *s)
{
	int count = 0;
	char ch;

	while (count >= 0)
	{
		ch = s[count];
		if (ch == '\0')
			break;
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
