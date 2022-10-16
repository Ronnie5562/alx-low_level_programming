#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description; prints lowercase alphabets in a reverse format
 * Return: 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
