include "main.h"

/**
 * print_alphabet_x10 - return lowercase latters 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
