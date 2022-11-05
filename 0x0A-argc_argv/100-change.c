#include <stdio.h>
#include <stdlib.h>
/**
 * main - it adds positive numbers.
 * @argc: The number of command line arguments used.
 * @argv: An array of the command line arguments used.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
