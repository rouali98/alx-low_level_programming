#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* Created BY ROUALI */

/**
 * malloc_checked - The Function
 * @b:  The variable
 * Return: The Return value/void
*/

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
