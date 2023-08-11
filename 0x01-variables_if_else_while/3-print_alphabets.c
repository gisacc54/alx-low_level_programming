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
putchar(myChar);
}
for (myChar = 'A'; myChar <= 'Z'; myChar++)
{
putchar(myChar);
}
putchar('\n');
return (0);
}
