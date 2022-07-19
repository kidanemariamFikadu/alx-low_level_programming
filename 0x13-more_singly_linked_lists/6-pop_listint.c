#include "lists.h"

/**
 * pop_listint - deleted the head of list
 * @head: head of a list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int nnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;
	nnode = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (nnode);
}
