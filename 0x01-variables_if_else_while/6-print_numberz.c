#include <stdio.h>
/**
 * main - prints numbers in base 10
 * Description: all base 10 single digit
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar("\n");
	return (0);
}
