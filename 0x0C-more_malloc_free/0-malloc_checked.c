#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer or 98 when no space
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
