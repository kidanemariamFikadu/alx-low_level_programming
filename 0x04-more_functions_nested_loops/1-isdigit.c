#include "main.h"

/**
 * _isdigit - checks if c is digit
 *
 * @c: input to be checked
 * Return: i if it is digit, 0 if it is not
 */
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
