#include "main.h"


/**
*   times_table - This is print_last_digit fuction
*/
void times_table(void)
{
int h, m, k;

	for (h = 0; h < 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			k = h * m;
			if (m == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
