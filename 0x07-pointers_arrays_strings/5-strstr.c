#include "main.h"
#include <stdio.h>

/**
*   _strstr - This is _strstr fuction
*   @haystack: pointer haystack
*   @needle: char needle
*   Return: chaar
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;

while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}
