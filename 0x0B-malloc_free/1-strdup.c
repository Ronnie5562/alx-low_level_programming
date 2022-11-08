#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of str.
 * @str: the string.
 * Return: a pointer to the duplicated string - NULL if str = NULL.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *newArr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		newArr = (char *)malloc((i + 1) * sizeof(char));
		if (newArr == NULL)
		{
			return (NULL);
		}
		for (j = 0; str[j] != '\0'; j++)
		{
			newArr[j] = str[j];
		}
	}
	return (newArr);
}
