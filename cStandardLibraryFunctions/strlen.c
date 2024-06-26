// strlen(): This function calculates the length of a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "C programming";
    size_t length = strlen(str);
    printf("Length of the string: %zu\n", length);
    return 0;
}