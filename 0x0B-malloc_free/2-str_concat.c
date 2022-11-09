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
	unsigned int i, j, len1 = 0, len2 = 0;
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL;)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	newStr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newStr[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		newStr[j++] = s2[i];

	return (newStr);
}
