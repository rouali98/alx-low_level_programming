#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Created BY ROUALI */

/**
 * _memcpy - The Function
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The number of bytes to be copied
 * Return: The modified destination pointer
*/

void	*_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	dest_ptr = (char *)dest;
	i = 0;
	src_ptr = (const char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/* Created BY ROUALI */

/**
 * _realloc - The Function
 * @ptr: The pointer to be reallocated
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 * Return: The modified pointer to the reallocated memory block
*/

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void	*new_ptr;

	if (new_size == 0 && ptr != NULL)
		return (free(ptr), NULL);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	_memcpy(new_ptr, ptr, (new_size < old_size) ? new_size : old_size);
	free(ptr);
	return (new_ptr);
}
