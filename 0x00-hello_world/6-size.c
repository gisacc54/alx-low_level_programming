#include <stdio.h>

int main()
{
    char charType;
    int intType;
    long int longintType;
    long long int longlongintType;
    float floatType;
    
    printf("Size of an char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of an long int: %zu byte(s)\n", sizeof(longintType));
    printf("Size of an long long int: %zu byte(s)\n", sizeof(longlongintType));
    printf("Size of an float: %zu byte(s)\n", sizeof(floatType));

    return 0;
}