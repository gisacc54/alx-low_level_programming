#include "main.h"

/**
*   _strcmp - This is _strcmp fuction
*   @s1: pointer
*   @s2: pointer
*   Return: int
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

return (*s1 - *s2);
}
