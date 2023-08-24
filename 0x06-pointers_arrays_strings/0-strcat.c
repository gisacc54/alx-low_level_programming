#include "main.h"

/**
*   _strcat - This is _strcat fuction
*   @dest: pointer
*   @src: pointer
*   Return: *char
*/
char *_strcat(char *dest, char *src)
{
char *dest_new = dest;

while (*dest != '\0')
{
dest_new++;
}

while (*src != '\0')
{
*dest_new = *src;
dest_new++;
src++;
}
*dest_new = '\0';
return (dest);
}
