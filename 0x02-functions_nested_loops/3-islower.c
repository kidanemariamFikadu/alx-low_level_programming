#include "main.h"

/**
 * _islower - prints uppercase or lowercase
 *
 * @c: the character in ASCII code
 * Return: always 0
 */
int _islower(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
