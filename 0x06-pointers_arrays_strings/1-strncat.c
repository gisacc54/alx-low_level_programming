#include "main.h"

/**
*   _strncat - This is _strncat fuction
*   @dest: pointer
*   @src: pointer
*   @n: int
*   Return: *char
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_new = dest;

while (*dest_new != '\0')
{
dest_new++;
}

while (*src != '\0' && n > 0)
{
*dest_new = *src;
dest_new++;
src++;
n--;
}
*dest_new = '\0';
return (dest);
}
