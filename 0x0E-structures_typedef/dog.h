#ifndef DOG_H
#define DOG_H
/**
*struct dog - dog structures
*@name: name of the dog
*@age: age of the dog
*@owner: the owner of the dog
*/
struct dog
{
char *name;
float age;
char owner;
}
/* function prototypes */
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

