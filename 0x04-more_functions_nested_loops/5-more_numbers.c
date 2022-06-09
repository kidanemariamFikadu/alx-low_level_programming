#include "main.c"

/**
 * more_numbers - print 0 - 14 10X
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 52; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
