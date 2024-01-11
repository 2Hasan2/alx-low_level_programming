#include "lists.h"

/**
 * insert_dnodeint_at_index - it's an insert function
 * @h: pointer to pointer to head of list
 * @idx: index of list where new node should be added
 * @n: data to be added to new node
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = NULL, *new_node = NULL;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	aux = *h;
	while (idx > 1)
	{
		if (!aux)
			return (NULL);
		aux = aux->next;
		idx--;
	}
	if (!aux->next)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = aux;
	new_node->next = aux->next;
	aux->next->prev = new_node;
	aux->next = new_node;
	return (new_node);
}
