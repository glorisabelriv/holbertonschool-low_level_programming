#include <stdio.h>
#include "dog.h"
/**
 *init_dog - entry point
 *@d: structi pointer
 *@name: char
 *@age: float value
 *@owner: char
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

