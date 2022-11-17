#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: Numbers of paramrters.
 * @...: Indicates infinite number of parameters.
 *
 * Return: If n == 0 - 0; else - sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n); 

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
