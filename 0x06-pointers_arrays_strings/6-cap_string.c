#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
*   is_separator - This is is_separator fuction
*   @c: pointer
*   Return: bool
*/
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";

for (int i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (true);
}
}

return (false);
}

/**
*   cap_string - This is cap_string fuction
*   @str: pointer
*   Return: *char
*/
char *cap_string(char *str)
{
char *ptr = str;
bool new_word = true;

while (*ptr != '\0')
{
if (is_separator(*ptr))
{
new_word = true;
}
else if (new_word && isalpha(*ptr))
{
*ptr = toupper((unsigned char)*ptr);
new_word = false;
}
else
{
*ptr = tolower((unsigned char)*ptr);
}
ptr++;
}

return (str);
}
