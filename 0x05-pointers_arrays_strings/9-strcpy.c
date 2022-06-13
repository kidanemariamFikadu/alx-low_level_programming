#include "main.h"

/**
 * _strcpy - copy string from one addres to another
 * @dest: destination location
 * @src: source string
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
