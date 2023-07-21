#include "dog.h"

/* Created BY ROUALI */

/**
 *free_dog - frees a dog struct
 *@d: the struct to be freed
 *Return: void it returns nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
