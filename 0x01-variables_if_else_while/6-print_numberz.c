#include <stdio.h>

/**
 * main- prints all one digit numbers with putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for(i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
