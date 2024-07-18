#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @psaa: for pointer to structures and activates the arguments
 * from each one
 * @name: characters to initialize
 * @age: floating point number to initialize
 * @owner: characters to initialize
 */

void init_dog(struct dog *psaa, char *name, float age, char *owner)
{
	if (psaa == NULL)
		psaa = malloc(sizeof(struct dog));
	psaa->name = name;
	psaa->age = age;
	psaa->owner = owner;
}
