#include <stdio.h>

/**
 * main - calculate first 98 fibonacci seriece
 * Return: always 0
 */
int main(void)
{
	int c, bool1, bool2;
	long int n1, n2, tot1, tot2, tot3, tot4;

	n1 = 1;
	n2 = 2;
	bool1 = bool2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (bool1)
		{
			tot1 = n1 + n2;
			printf(", %ld", tot1);
			n1 = n2;
			n2 = tot1;
		}
		else
		{
			if (bool2)
			{
				tot3 = n1 % 1000000000;
				tot4 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				bool2 = 0;
			}
			tot2 = (tot3 + tot4);
			tot1 = n1 + n2 + (tot2 / 1000000000);
			printf(", %ld", tot1);
			printf("%ld", tot2 % 1000000000);
			n1 = n2;
			tot3 = tot4;
			n2 = tot1;
			tot4 = (tot2 % 1000000000);
		}
		if (((n1 + n2) < 0) && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
