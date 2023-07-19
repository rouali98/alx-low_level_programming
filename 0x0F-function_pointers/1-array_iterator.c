#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
*/

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
			action(array[i++]);
	}
}
