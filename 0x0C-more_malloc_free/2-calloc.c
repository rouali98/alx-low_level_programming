#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created BY ROUALI */

/**
 * _calloc - The Function
 * @nmemb:  The variable
 * @size:  The variable
 * Return: The Return value/void
*/

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void			*ptr;
	unsigned int	total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}