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

	char y = 'A';

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
