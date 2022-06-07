#include "main.h"

/*
 * main: prints out _putchar 
 *
 * Return- Always 0
 */
int main(void)
{
	char c[7] = {112, 117, 116, 99, 104, 97, 114};
	int count;

	for (count = 0; count < 7; count++)
	{
		_putchar(c[count]);
	}
	return (0);
}
