#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function traverses the linked list pointed to by @h and counts
 * the number of nodes in the list.
 *
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
