#include <stdio.h>

/**
 * main - prints alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i])
	}
	puchar('\n');
	return (0);
}