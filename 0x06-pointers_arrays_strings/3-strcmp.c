#include "main.h"

/**
*   _strcat - This is _strcat fuction
*   @s1: pointer
*   @s2: pointer
*   Return: *char
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0') {
if (*s1 != *s2) {
return (*s1 - *s2);
}
s1++;
s2++;
}

return (*s1 - *s2); 
}
