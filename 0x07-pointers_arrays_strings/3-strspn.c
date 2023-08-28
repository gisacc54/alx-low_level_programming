#include "main.h"

/**
*   _strspn - This is _strspn fuction
*   @s: pointer s
*   @accept: char
*   Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;

while (*s != '\0' && strchr(accept, *s) != NULL)
{
length++;
s++;
}

return (length);
}
