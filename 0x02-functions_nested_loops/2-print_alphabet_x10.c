#include "main.h"
/**
*   print_alphabet_x10 - This is print_alphabet_x10 fuction
*   Return: 0
*/
void print_alphabet_x10(void)
{
char myChar;
int i = 0;
while (i < 10)
{
for (myChar = 'a'; myChar <= 'z'; myChar++)
{
_putchar(myChar);
}
i++;
_putchar('\n');
}
}
