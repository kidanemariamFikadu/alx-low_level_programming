#include "main.h"
#include <stdlib.h>

/**
 * strdup - duplicate string array to new location
 * @str: character array pointer
 * Return: new memory location
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
