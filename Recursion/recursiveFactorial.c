
// C program to find factorial of given number
#include <stdio.h>

// Function prototype
unsigned int factorial(unsigned int n);

// Driver code
int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

