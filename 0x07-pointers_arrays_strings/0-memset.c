#include "main.h"

/**
*   _memset - This is _memset fuction
*   @s: pointer s
*   @b: char
*   @n: int
*   Return: chaar
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j = 0;

while(j < n)
{
s[j] = b;
j++;
}

return (s);
}
