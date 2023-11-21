#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer to the head node of a listint_t linked list
 * Return: the head node's data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (!*head)
	{
		free(*head);
		return (0);
	}

	*head = ptr->next;
	n = ptr->n;

	free(ptr);

	return (n);
}
