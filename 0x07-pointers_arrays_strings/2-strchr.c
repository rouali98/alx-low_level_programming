#include "main.h"

/**
 * _strchr - a function
 * @s:  variable
 * @c: variable
 * Return: return s or NULL
 */

char	*_strchr(char *s, char c)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	while (i <= size)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
