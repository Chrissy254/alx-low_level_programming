#include <stdio.h>
/*
*main - prints lowercase alphabet using the putchar function
*It declares a character variable letter to hold each letter of the alphabet,
*then uses a for loop to iterate and print them using putchar
*Finally, main prints a newline character
*returns: 0 to indicate successful execution.
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
