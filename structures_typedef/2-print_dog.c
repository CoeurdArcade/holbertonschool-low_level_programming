#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @psaa for pointer to structures and activates their arguments 
 */

void print_dog(struct dog *psaa)
{
	if (psaa == NULL)
	return;

	if (psaa->name == NULL)
		psaa->name = "(nil)";
	if (psaa->owner == NULL)
		psaa->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", psaa->name, psaa->age, psaa->owner);
}
