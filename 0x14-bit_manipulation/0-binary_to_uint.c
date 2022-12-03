#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars.
 *  Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length, num;

	for (i = 0; b[length]; length++)
	{
		if (b == NULL || !isdigit(b[length]))
		{
			return (0);
		}
		else
		{
			num << 1;
			num += b[length];
		}
	}
	return (num);
}
