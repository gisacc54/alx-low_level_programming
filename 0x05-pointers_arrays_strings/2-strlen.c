#include "main.h"

/**
*   _strlen - This is _strlen fuction
*   @s: pointer n
*   Return: int
*/
int _strlen(char *s)
{
int i = 0;
for (; *s++;)
{
i++;
}

return (i);
}
