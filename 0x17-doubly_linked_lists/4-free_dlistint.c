#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
