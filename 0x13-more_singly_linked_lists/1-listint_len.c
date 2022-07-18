#include "lists.h"

/**
 * listint_len - prints length of list
 * @h: linked list input
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
