#include <stdio.h>

/**
 * main - prints the add of the fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int c;
	long int i1, i2, tot;

	i1 = 1;
	i2 = 2;

	printf("%ld, %ld", i1, i2);
	for (c = 0; c < 48; c++)
	{
		tot = i1 + i2;
		printf(", %ld", tot);
		i1 = i2;
		i2 = tot;
	}
	printf("\n");
	return (0);
}
