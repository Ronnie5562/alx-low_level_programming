#include "variadic_functions.h"
#include <stdarg>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: numbers of paramrters.
 * @...:indicates infinite number of parameters.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list(ap);
	va_start(ap, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
