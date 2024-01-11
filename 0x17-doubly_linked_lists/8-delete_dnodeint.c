#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	aux = get_dnodeint_at_index(*head, index);
	if (!aux)
		return (-1);
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
