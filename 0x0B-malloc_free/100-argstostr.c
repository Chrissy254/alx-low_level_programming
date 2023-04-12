#include <stdlib.h>
#include "main.h"
/**
* argstostr - Concatenates all the arguments of a program.
* @ac: The number of arguments.
* @av: An array of strings containing the arguments.
* Return: A pointer to the concatenated string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
len++;
total_len += len;
}
/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (total_len + ac + 1));
if (str == NULL)
return (NULL);
/* Copy the arguments into the concatenated string */
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[len] = av[i][j];
len++;
}
str[len] = '\n';
len++;
}
str[len] = '\0';
return (str);
}

