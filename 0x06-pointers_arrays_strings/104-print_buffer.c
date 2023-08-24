#include "main.h"

/**
*   print_buffer - This is print_buffer fuction
*   @b: pointer
*   @size: int
*/
void print_buffer(char *b, int size)
{
if (size <= 0)
{
printf("\n");
return;
}

for (int i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (int j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x", (unsigned char)b[i + j]);
}
else
{
printf("  ");
}

if (j % 2 == 1)
{
printf(" ");
}
}

printf(" ");
for (int j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%c", isprint(b[i + j]) ? b[i + j] : '.');
}
}

printf("\n");
}
}
