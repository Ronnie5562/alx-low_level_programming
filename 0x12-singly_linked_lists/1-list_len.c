#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: pointer to a link list*
 *
 * Return: size_t, length
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
