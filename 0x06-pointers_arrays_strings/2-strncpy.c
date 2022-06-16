#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string destination
 * @src: string source
 * @n: copy upto index n
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
