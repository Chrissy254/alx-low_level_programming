#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: a struct that represents a dog and its associated data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototypes */
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

