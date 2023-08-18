#include "main.h"

/**
 * print_triangle - This is print_triangle fuction
 * @size: times n
 */
void print_triangle(int size)

{


int i, z, k, p;

if (size > 0)
{
k = size - 1;
for (i = 0; i < size ; i++)
{
for (z = k; z > 0 ; z--)
{
_putchar (' ');
}

for (p = 0; p <= i; p++)
{
_putchar (35);
}

k--;

_putchar ('\n');


}

}

else
{
_putchar ('\n');
}
}
