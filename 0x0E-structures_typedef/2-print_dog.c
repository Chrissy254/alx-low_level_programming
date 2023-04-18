#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints the elements of a dog structure
* @d: Pointer to the dog structure to print
* Return: void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

