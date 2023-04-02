#include <stdio.h>
/*
*main - entry point
*Description: Prints the alphabet in lowercase
*using the putchar function twice
*followed by a new line
*Return: Always 0 (Success)
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

