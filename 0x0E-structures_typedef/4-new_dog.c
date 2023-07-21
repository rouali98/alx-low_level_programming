#include "dog.h"

/* Created BY ROUALI */

/**
 *_strdup - duplicates a string
 *@s: the string to be duplicated
 *Return: a pointer to the new string
*/

char *_strdup(char *s)
{
	int i = 0;
	char *new;

	if (!s)
		return (NULL);
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* Created BY ROUALI */

/**
 *new_dog - creates a new dog
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 *Return: a pointer to the new dog
*/

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *) malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
