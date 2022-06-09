#include <stdio.h>

/**
 * main - gets the largest prime number of 612852475143
 * Return: always 0
 */
int main(void)
{
	long int j, i;

	i = 612852475143;
	for (i = 2; j <= i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
			j--;
		}
	}
	printf("%ld\n", j);
	return (0);
}
