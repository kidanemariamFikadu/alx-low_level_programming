#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * @head: head of the list
 * @idx: index to put in
 * @n: integer elemnet
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	usigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
