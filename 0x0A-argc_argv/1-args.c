#include <stdio.h>
/**
 * main - it prints the number of arguments passed into it.
 * @argc: The number of command line arguments.
 * @argv: An array of the command line arguments used.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
