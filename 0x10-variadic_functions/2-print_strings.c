#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: void
*/

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	char			*str;
	va_list			list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
