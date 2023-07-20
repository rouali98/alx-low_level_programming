#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @...: A variable number of arguments to sum.
 *
 * Return: The sum of all the parameters.
*/

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	int				sum;
	va_list			list;

	sum = 0;
	va_start(list, n);
	i = 0;
	while (i++ < n)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
