#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Lol
 * @name: Lol
 * @age: Lol
 * @owner: Lol
 * Return: Lol
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *Name = malloc(sizeof(name));
	if (Name == NULL)
	{
		return (NULL);
	}
	char *Owner = malloc(sizeof(owner));
	if (Owner == NULL)
	{
		return (NULL);
	}


}