#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments of your program.
 * @ac: number of command lime arguments.
 * @av: An array of the command line arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j, x = 0, size = ac;

	if (ac == NULL || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}
	newStr = malloc(sizeof(char) * size + 1);
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newStr[x++] = av[i][j];
		}
		newStr[x++] = '\n';
	}
	newStr[size] = '\0';
	return (newStr);
}
