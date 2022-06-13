#include "main.h"

/**
 * rev_string - reverse tring
 * @s: string input
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0, i, j;
	char *str, temp;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}

	for (i = 0; i < (c - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - i));
			*(str + (j - 1)) = temp;
		}
	}
}
