/*  
 * C Program to find Sum of N Numbers using Recursion
 */
#include <stdio.h>
 
void calculateSum(int);
 
int main()
{
    int num;
 
    printf("Enter the Nth number: ");
    scanf("%d", &num);
    calculateSum(num);
    return 0;
}
 
void calculateSum(int num)
{
    static int sum = 0;
 
    if (num == 0)
    {
        printf("Sum of first N numbers is %d\n", sum);
        return;
    }
    else
    {
        sum += num;
        calculateSum(--num);
    }
}