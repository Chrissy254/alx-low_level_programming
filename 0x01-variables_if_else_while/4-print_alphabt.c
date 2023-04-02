#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
/* print lowercase alphabet without q and e */
for (c = 'a'; c <= 'z'; c++)
{
/* skip q and e */
if (c == 'q' || c == 'e')
continue;
/*print character */
putchar(c);
}
/* print newline */
putchar('\n');
return (0);
}

