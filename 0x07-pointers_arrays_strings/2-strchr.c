#include "main.h"

/**
*   _strchr - This is _strchr fuction
*   @s: pointer s
*   @c: char
*   Return: char
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
