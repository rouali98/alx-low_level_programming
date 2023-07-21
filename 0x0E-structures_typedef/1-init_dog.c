#include "dog.h"

/* Created BY ROUALI */

/**
 *init_dog - initializes a dog struct
 *@d: the struct to be initialized
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 *Return: void it returns nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
