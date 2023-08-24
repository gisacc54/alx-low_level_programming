#include "main.h"
#include <stdbool.h>

/**
*   rot13 - This is rot13 fuction
*   @str: pointer
*   Return: *char
*/
char *rot13(char *str)
{
int i, j;

char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)
{
if (str[i] == x[j])
{
str[i] = y[j];
break;
}
}
}

return (str);
}
