#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created BY ROUALI */

/**
 * _memset - Fills a block of memory with a particular value
 * @ptr: Pointer to the memory block
 * @value: Value to be set (treated as unsigned char)
 * @total_size: Total size of the memory block in bytes
 * 
 * Return: Pointer to the memory block (ptr)
*/

void	*_memset(void *ptr, int value, size_t total_size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < total_size)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

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
	_memset(ptr, 0, total_size);
	return (ptr);
}
