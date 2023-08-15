#include "main.h"


/**
*   times_table - This is print_last_digit fuction
*/
void times_table(void)
{
int h, m, k;

	for (h = 0; h < 9; h++)
	{
		_putchar(0);
		for (m = 0; m < 9; m++)
		{
			k = h * m;
			_putchar(k + '0');
			_putchar(',');
			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
