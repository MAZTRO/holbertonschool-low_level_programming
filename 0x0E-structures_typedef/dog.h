#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Lol
 * @name: Lol
 * @age: Lol
 * @owner: Lol
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
