/*
    Problem: Find given number is a prime number or not using recursion in C.
    * References
        ** https://empslocal.ex.ac.uk/people/staff/mrwatkin/zeta/tutorial.htm
		** https://stackoverflow.com/questions/5811151/why-do-we-check-up-to-the-square-root-of-a-number-to-determine-if-the-number-is
*/
#include <stdio.h>
int isPrime(int n, int i);

int main()
{
    int n = 15;
    if (isPrime(n, 2))
    {
        printf("Yes, it's a prime number.\n");
    }
    else
    {
        printf("No, it's not a prime number.\n");
    }
    return 0;
}

// Function to check if a number is prime or not
int isPrime(int n, int i)
{
    // Base cases
    // Base case 1, exit condition 1
    if (n <= 2)
    {
        if(n == 2) // Since negative number cannot be a prime number, 1 cannot be a prime number
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    // Base case 2, exit condition 2
    if (n % i == 0)
        return 0;
    // Base case 3, exit condition 3, why it is done like this is given below
    /*
        Logic behind this base case or exit condition
        If a number n is not a prime, it can be factored into two factors a and b:
        n = a * b
        Now a and b can't be both greater than the square root of n, since then the product a * b
        would be greater than sqrt(n) * sqrt(n) = n. So in any factorization of n, 
        at least one of the factors must be less than or equal to the square 
        root of n, and if we can't find any factors less than or equal to the square root, n must be a prime.
    */
    if (i * i > n)
        return 1;

    // Check for next divisor, if Base case 2 fails
    return isPrime(n, i + 1);
}