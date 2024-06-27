// Garbage value concept in variable
#include <stdio.h>
int main()
{
    int x; // Garbage value is present in x without initialization
    x = x + 10;
    printf("x = %d", x);
    return 0;
}