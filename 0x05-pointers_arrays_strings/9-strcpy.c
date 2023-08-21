#include "main.h"

/**
*   _strcpy - This is _strcpy fuction
*   @dest: pointer dest
*   @src: pointer src
*   Return: char
*/
char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
dest[a] = src[a];
dest[a] = '\0';
return (dest);
}
