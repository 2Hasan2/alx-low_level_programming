#include "lists.h"

/**
 * print_listint - print
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}