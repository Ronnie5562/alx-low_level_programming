#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars.
 *  Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, num;

	if (b[length] == '\0')
	{
		return (0);
	}

	while ((b[length] == '0') || (b[length] == '1'))
	{
		num <<= 1;
		num += b[length] + '0';
		length++;
	}
	return (num);
}
