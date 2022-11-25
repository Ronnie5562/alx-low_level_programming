#include "lists.h"

/**
 * list_len - count length of a linked list
 * @h: pointer to a link list
 * @length: a counter for size_t
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
