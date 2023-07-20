#include "variadic_functions.h"

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: Any argument not of type char, integer, float,
 *              or char * is ignored.
 */

void	print_all(const char *const format, ...)
{
	unsigned int	i = 0;
	char			*str;
	va_list			list;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(list, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(list, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(list, double));
		else if (format[i] == 's')
		{
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
