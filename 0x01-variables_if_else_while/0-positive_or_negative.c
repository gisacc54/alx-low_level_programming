#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*   main - This is main fuction
*   Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* your code goes there */

if (n > 0)
printf("%dis positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
return (0);
}
