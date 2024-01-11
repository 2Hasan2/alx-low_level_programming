#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: address of node at index or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	if (!head)
		return (NULL);
	while (i <= index)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
