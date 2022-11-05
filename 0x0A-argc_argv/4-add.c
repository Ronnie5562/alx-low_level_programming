#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - it adds positive numbers.
 * @argc: The number of command line arguments used.
 * @argv: An array of the command line arguments used.
 * Return: 0 - success, 1 - failure.
 */
int main(int argc, char *argv[])
{
	int i, x, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
