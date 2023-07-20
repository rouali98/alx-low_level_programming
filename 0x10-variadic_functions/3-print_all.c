#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: void
*/

void	print_all(const char *const format, ...)
{
	unsigned int	i;
	char			*str;
	va_list			list;

	i = 0;
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
		if (format[i + 1] && (format[i] == 'c' || \
		format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
