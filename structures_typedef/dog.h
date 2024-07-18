#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: character name of dog
 * @age: floating point data for greater flexibility
 * the age can be changed given the context
 * @owner: character name of owner
 *
 * Description: build a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 * psaa for pointer to structures and activates the arguments of each
 * structure where the pointer is allocated
 * vlcc is for variable length calculator of characters untill reaches
 * null terminator
 */

typedef struct dog dog_t;

void init_dog(struct dog *psaa, char *name, float age, char *owner);
void print_dog(struct dog *psaa);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *psaa);
char *_strcpy(char *dest, char *src);
int _strlen(char *vlcc);

#endif
