#include "lists.h"
/**
 * list_len - checks number of elements
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
