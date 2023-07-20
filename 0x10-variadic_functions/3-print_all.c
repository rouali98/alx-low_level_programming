#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: a list of types of arguments passed to the function
 *@...: the arguments in hand
 *Return: nothing
 */

void	print_all(const char *const format, ...)
{
	va_list			list;
	unsigned int	i;
	char			*str;

	i = 0;
	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break ;
			case 'i':
				printf("%d", va_arg(list, int));
				break ;
			case 'f':
				printf("%f", va_arg(list, double));
				break ;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break ;
			default:
				i++;
				continue ;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
