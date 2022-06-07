#include "main.h"

/**
 * main - print '_putchar'
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	unsigned int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(c[count]);
	}
	_putchar('\n');

	return (0);
}
