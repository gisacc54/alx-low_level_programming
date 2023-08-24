#include "main.h"
#include <stdbool.h>

/**
*   rot13 - This is rot13 fuction
*   @str: pointer
*   Return: *char
*/
char *rot13(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
char base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
*ptr = (char)(((*ptr - base + 13) % 26) + base);
}

ptr++;
}

return (str);
}
