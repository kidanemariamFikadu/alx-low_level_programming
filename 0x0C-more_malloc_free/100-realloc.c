#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memmory block
 * @ptr: pointer to be reallocated
 * @old_size: size of ptr space
 * @new_size: size to be allocated
 * Return: pointer in new location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
