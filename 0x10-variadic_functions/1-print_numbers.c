#include "variadic_functions.h"

/* Created BY ROUALI */

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: void
*/

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list			list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
