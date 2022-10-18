#include "main.h"
/**
* print_alphabet - Entry point
* Description: a function that prints the lowercase alphabets
* Return: void
*/
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
