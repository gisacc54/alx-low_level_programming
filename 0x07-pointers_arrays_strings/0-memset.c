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
 for (unsigned int i = 0; i < n; ++i) {
        s[i] = b[i];
    }

return (s);
}
