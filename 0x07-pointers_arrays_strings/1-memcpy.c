#include "main.h"

/**
*   _memcpy - This is _memcpy fuction
*   @dest: pointer dest
*   @src: pointer src
*   @n: int
*   Return: chaar
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
