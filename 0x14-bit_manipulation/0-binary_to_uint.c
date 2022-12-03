#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars.
 *  Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length, num;

	for (length = 0; b[length]; length++)
	{
		if (b == NULL || b[len] == '\0')
		{
			return (0);
		}
		else
		{
			num << 1;
			num += b[length] - '0';
		}
	}
	return (num);
}
