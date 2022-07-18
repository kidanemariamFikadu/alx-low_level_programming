#include "lists.h"
/**
 * add_nodeint - adds new node
 * @head: head of the list
 * @n: the new node to be added
 * Return: linked list of listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = head;
	head = temp;
	free(temp);
	return (head);
}
