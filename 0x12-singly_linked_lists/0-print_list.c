#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function traverses the linked list pointed to by @h and prints
 * information about each node, including the length of the string (if
 * not NULL) and the string itself.
 *
 * If a node contains a NULL string, it prints "[0] (nil)".
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
