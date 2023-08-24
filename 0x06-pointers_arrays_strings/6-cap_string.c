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
char *cap_string(char *s)
{
int i, j;

char spe[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;

for (j = 0; j < 13; j++)
{
if (s[i] == spe[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
    s[i + 1] -= 32;
}
}
}
}

return (s);
}
