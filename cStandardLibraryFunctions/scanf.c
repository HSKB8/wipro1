// scanf(): This function reads formatted input from the standard input.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You entered: %d years\n", age);
    return 0;
}