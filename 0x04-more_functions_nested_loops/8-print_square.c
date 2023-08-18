#include "main.h"

/**
 * print_square - This is print_square fuction
 * @size: times n
 *
 */
void print_square(int size)
{
int k, m;
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (k = 0; k < size; k++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
