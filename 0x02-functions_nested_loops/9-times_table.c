#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int x, y, product, tens, ones;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			tens = product / 10;
			ones = product % 10;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
