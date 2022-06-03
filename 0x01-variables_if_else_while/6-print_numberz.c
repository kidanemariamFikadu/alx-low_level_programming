#include <stdio.h>

/**
 * main- prints all one digit numbers with putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for( i=0; i<10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
