#include <stdio.h>

/**
*   main - This is main function
*
*   Return: 0
*/
int main(void)
{
char myChar;
for (myChar = 'a'; myChar <= 'z'; myChar++)
{
if (myChar == 'e' || myChar == 'q')
continue;
putchar(myChar);
}
putchar('\n');
return (0);
}
