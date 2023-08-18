#include "main.h"

/**
*   more_numbers - This is more_numbers fuction
*/
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (j >= 10)
_putchar(1+'0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}

}
