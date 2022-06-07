#include "main.h"

/**
 * _isalpha - prints uppercase or lowercase
 *
 * @c: the character in ASCII code
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
