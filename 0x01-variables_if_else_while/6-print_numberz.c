#include <stdio.h>
/**
 * main - prints numbers in base 10
 * Description: all base 10 single digit
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar("\n");
	return (0);
}
