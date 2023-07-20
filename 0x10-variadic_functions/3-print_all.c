#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: void
*/

void	print_all(const char *const format, ...)
{
	int			i = 0;
	va_list		list;
	char		*s;
	char		*separator = "";

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break ;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break ;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break ;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break ;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
