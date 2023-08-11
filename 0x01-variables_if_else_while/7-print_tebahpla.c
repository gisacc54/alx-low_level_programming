#include <stdio.h>

/**
*   main - This is main function
*
*   Return: 0
*/
int main(void)
{
char myChar;
for (myChar = 'z'; myChar >= 'a'; myChar--)
{
putchar(myChar);
}
putchar('\n');
return (0);
}
