#include <stdio.h>
#include <stdlib.h>

int	*array_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i++] = min;
		min++;
	}

	return (arr);
}
