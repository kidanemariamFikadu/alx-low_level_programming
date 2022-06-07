#include "main.h"

/*
 * times_bale - returns times table 10 x 10
 *
 * Return: return void
 */
void times_table(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b=0; b < 10; b++){
			_putchar(a*b);
			_putchar(', ');
		}
		_putchar('\n');
	}
}
