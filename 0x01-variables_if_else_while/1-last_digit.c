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
int x;
x = n % 10;
printf("Last digit of %d is %d ", n, x);
if (x > 5)
printf("and is greater than 5");
else if (x == 0)
printf("and is 0");
else
printf("and is less than 6 and not 0");
return (0);
}
