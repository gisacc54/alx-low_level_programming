#include "main.h"


/**
*   _isalpha - This is _isalpha fuction
*   @c: char to cheack
*   Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}