#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created BY ROUALI */

/**
 * _calloc - The Function
 * @nmemb: The variable
 * @size: The variable
 * Return: The Return value/void
*/

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	total_size;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
