#include "lists.h"
/**
 * free_listp - free linked list
 * @head: head of the list
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of list
 * Return: number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t modes = 0;
	listp_t *hptr, *new, *add;

	htpr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = htpr;
		htpr = new;
		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&htpr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
