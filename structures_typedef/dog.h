#include <stdio.h>
#include "dog.h"
/**
 *struct dog - type
 *Return: 0
 **/

struct dog
{
  char *name;
  float age;
  char *owner;
};

typedef struct my_dog;

  void init_dog(struct dog *d, char *name, float age, char *owner);
