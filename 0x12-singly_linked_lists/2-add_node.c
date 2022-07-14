#include "lists.h"
/**
 * add_node - addes node to a list at the first node
 * @head: linked list
 * @str: node to be added
 * Return: linked list with the new node
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
