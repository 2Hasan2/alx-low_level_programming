#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to store in new node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->prev = NULL;
	if (!temp)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp;
	temp->prev = new_node;
	*head = new_node;
	return (new_node);
}
