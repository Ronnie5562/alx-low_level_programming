#include <stdio.h>
/**
 * main - it prints all arguments it receives.
 * @argc: The number of command line arguments used.
 * @argv: An array of the command line argument used.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
