#include "main.h"

/**
 * print_alphabet_x10
 * print the lowercase alphabets 10 times on different lines.
 * Return void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
