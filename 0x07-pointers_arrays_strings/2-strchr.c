#include "main.h"
#include <stdio.h>
/**
*   _strchr - This is _strchr fuction
*   @s: pointer s
*   @c: char
*   Return: char
*/
char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
