#include "main.h"

/**
 * _isupper - check if character is upper case
 * @c: input character
 * Return: 1 if it is uppercase, 0 if it is other case
 */
int _uppercase(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
