#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + i * size + i);
		y += *(a + i * size + size - i - 1);
	}
	printf("%i, %i\n", x, y);
}
