#include "main.h"

/**
 * *_strcat - concatenates strings
 * @dest: A parameter that points to a char
 * @src: A parameter that points to char
 * Return: returns a pointer to the destination string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x++])
	{
		y++;
	}
	for (x = 0; src[x]; x++)
	{
		dest[y++] = src[x];
	}
	return (dest);
}
