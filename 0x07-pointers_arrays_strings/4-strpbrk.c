#include "main.h"
#include <string.h>

/**
*   _strpbrk - This is _strpbrk fuction
*   @s: pointer s
*   @accept: pointer accept
*   Return: chaar
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (strchr(accept, *s) != NULL)
{
return (s);
}
s++;
}
return (NULL);
}
