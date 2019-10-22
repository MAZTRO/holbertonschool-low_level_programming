#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - function that gets the length of a prefix substring.
 * @name: The first string
 * @age: age of dog
 * @owner: owner of dog
 * Return: return dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *trosky;
	int i = 0, j = 0;

	name == NULL ? name = "" : name;
	owner == NULL ? owner = "" : owner;

	trosky = malloc(sizeof(dog_t));
	if (trosky == NULL)
		return (NULL);

	i = strlen(name);
	j = strlen(owner);

	(*trosky).name = malloc(i + 1);
	if ((*trosky).name == NULL)
	{
		free(trosky);
		return (NULL);
	}

	(*trosky).owner = malloc(j + 1);
	if ((*trosky).owner == NULL)
	{
		free((*trosky).name);
		free(trosky);
		return (NULL);
	}

	strcpy((*trosky).name, name);
	strcpy((*trosky).owner, owner);

	(*trosky).age = age;
	return (trosky);
}
