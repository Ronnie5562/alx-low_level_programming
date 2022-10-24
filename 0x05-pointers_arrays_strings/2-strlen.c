#include "main.h"

/**
 * _strlen -length of a string
 * @s: A pointer to an int that will be changed/updated
 * Return: void
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '0')
	{
		x++;
	}
	return (x);

}
