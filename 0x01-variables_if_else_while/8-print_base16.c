#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints out all hexadecimal numbers
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
