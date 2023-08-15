#include "main.h"


/**
*   print_sign - This is print_sign fuction
*   @n: int to cheack
*   Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('0');
return (-1);
}
else
{
_putchar('-');
return (0);    
}

}
