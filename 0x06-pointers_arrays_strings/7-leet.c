#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
*   leet - This is leet fuction
*   @str: pointer
*   Return: *char
*/
char *leet(char *s)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; *(s + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == s[i])
s[i] = b[j];
}
}
return (s);
}
