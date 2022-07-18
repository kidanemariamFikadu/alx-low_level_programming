#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @n: integer element
 * @next: points to the next node
 */
typedef struct list_s
{
	int n;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
