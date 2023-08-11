#include <stdio.h>

int main()
{
    char charType;
    int intType;
    long int longintType;
    long long int longlongintType;
    float floatType;
    
    printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(charType));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
    printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
    printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(longlongintType));
    printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
    return (0);
}