#include <stdio.h>

/**
 * main - fibonacii of the even valued numbers
 * Return: always 0
 */
int main(void)
{
	long int n1, n2, tot, atot;

	n1 = 1;
	n2 = 2;
	while (tot <= 40000000)
	{
		tot = n1 + n2;
		n1 = n2;
		n2 = tot;
		if ((n1 % 2) == 0)
			atot += n1;
	}
	printf("%ld\n", atot);
	return (0);
}
