#include <stdio.h>
#include "dog.h"

int main(void)
{
dog_t my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";

printf("My name is %s, and I am %.1f years old. My owner is %s :) - Woof!\n", my_dog.name, my_dog.age, my_dog.owner);

/* Calling print_dog function to print my_dog's details*/
print_dog(&my_dog);

return (0);
}

