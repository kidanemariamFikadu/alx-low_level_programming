#include "main.h"

/*
 * main: prints out _putchar 
 *
 * Return- Always 0
 */
int main(void)
{
	char c[] = {97, 112, 117, 116, 99, 104, 97, 114};
	int count, loop;

	loop = sizeof(c) / sizeof(int);
	for (count = 0; count < loop; count++)
	{
		_putchar(c[count]);
	}
	return (0);
}
