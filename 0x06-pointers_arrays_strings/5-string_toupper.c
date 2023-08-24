#include "main.h"
#include <ctype.h>

/**
*   string_toupper - This is string_toupper fuction
*   @str: pointer
*   Return: *char
*/
char *string_toupper(char *str)
{
char *str_new = str;

while (*str_new != '\0')
{
*str_new = toupper(*str_new);
str_new++;
}
return (str);
}
