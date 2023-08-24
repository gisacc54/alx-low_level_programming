#include "main.h"

/**
*   infinite_add - This is infinite_add fuction
*   @n1: pointer
*   @n2: pointer
*   @r: pointer
*   @size_r: int
*   Return: *char
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);

int carry = 0;
int max_len = len1 > len2 ? len1 : len2;
int result_index = 0;
if (max_len + 1 > size_r)
{
return (0);
}
for (int i = 0; i < max_len; i++)
{
int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[result_index] = (sum % 10) + '0';
result_index++;
}
if (carry)
{
if (result_index + 1 > size_r)
{
return (0);
}
r[result_index] = carry + '0';
result_index++;
}
r[result_index] = '\0';
for (int i = 0; i < result_index / 2; i++)
{
char temp = r[i];
r[i] = r[result_index - 1 - i];
r[result_index - 1 - i] = temp;
}

return (r);
}
