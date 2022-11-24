#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: The linked list.
 * @elements: a counter for size_t
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	for ( ; h != NULL; h = h->next)
		length++;

	return (length);
}
