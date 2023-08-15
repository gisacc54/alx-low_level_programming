#include "main.h"


/**
*   print_last_digit - This is print_last_digit fuction
*   @n: int to cheack
*   Return: 0
*/
int print_last_digit(int n)
{
num = n % 10;
if (num < 0)
num *= -1;

_putchar(num + '0');
return (num);
}
