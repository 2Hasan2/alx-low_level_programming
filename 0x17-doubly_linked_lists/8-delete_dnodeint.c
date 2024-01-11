#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;

	if (!head || !*head)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	while (index > 0)
	{
		if (!aux)
			return (-1);
		aux = aux->next;
		index--;
	}
	if (!aux->next)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
