#include "function_pointers.h"

/* Created BY ROUALI */

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: The index of the first non-zero return from the cmp function.
 *         If no element matches, return -1. If size <= 0, return -1.
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
