#include "main.h"

/**
*   _strncpy - This is _strncpy fuction
*   @dest: pointer
*   @src: pointer
*   @n: int
*   Return: *char
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_new = dest;

while (*src != '\0' && n > 0)
{
*dest_new = *src;
dest_new++;
src++;
n--;
}
while (n > 0)
{
*dest_new = '\0';
dest_new++;
n--;
}
return (dest);
}
