#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
*   leet - This is leet fuction
*   @str: pointer
*   Return: *char
*/
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_subs = "4433007711";

while (*ptr != '\0')
{
for (int i = 0; leet_chars[i] != '\0'; i++)
{
if (*ptr == leet_chars[i])
{
*ptr = leet_subs[i];
break;
}
}
ptr++;
}

return (str);
}
