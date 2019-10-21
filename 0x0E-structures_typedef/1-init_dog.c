#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: Lol
 * @name: Lol
 * @age: Lol
 * @owner: Lol
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
