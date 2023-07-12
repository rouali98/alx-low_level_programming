#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */

char	*argstostr(int ac, char **av)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j++] != '\0')
			len++;
		len++;
		i++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j++];
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
