#include "main.h"

/**
 * print_last_digit - return last digit
 *
 * @n: integer input
 * Return: interger
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-1);
	}
	else
	{
		_putchar(i + 48);
		return (1);
	}
}
