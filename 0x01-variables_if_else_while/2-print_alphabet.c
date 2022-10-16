#include <stdio.h>

/**
 * main - Entry point
 * Description: lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
