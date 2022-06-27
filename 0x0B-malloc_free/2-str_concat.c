#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates 2 strings
 * @s1: string1 input
 * @s2: string2 input
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, limit;
	char *cpdstr;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	cpdstr = (char *)malloc(sizeof(char) * (i + j + 1));

	if (cpdstr == NULL)
	{
		free(cpdstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		cpdstr[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++; j++)
		cpdstr[k] = s2[j];

	return (cpdstr);
}
