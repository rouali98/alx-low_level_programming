#include "dog.h"
#include <stdio.h>

/* Created BY ROUALI */

/**
 *print_dog - prints a dog struct
 *@d: the struct to be printed
 *Return: void it returns nothing
*/

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d)
	{
		name = (d->name) ? d->name : "(nil)";
		owner = (d->owner) ? d->owner : "(nil)";
		age = (d->age) ? d->age : 0;
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
