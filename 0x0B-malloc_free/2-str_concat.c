#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: pointer to th newly allocated space in memory.
 * - NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, x;
	unsigned int j, y;
	char str;
	char *newStr;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	newStr = malloc(sizeof(char) * (i + j + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		newStr[x] += s1[x];
		newStr = newStr[x];
	}
	str = newStr;
	for (y = 0; y <= j; y++)
	{
		newStr[y] += s2[y];
		newStr  = newStr[y];
	}
	str += newStr;
	newStr = str;
	return (newStr);
}
