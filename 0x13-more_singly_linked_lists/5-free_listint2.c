#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer to pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	if (!head)
		return;

	while (*head)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}

	*head = NULL;
}
