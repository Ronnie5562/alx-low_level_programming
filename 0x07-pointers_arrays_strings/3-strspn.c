#include "main"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int bytes = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	while (str1[i] != '\0')
	{
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				bytes++;
				break;
			}
			j++;
		}
	}
	return (bytes);
}
