// Concept: If-Else in C
// If-Else used to choose any one piece of code based on certain condition in the code.
#include <stdio.h>
int main()
{
    int x = 20;

    // if - else statement
    // based on condition is true run Piece 1 of code if condition is false Piece 2 of code
    if (x <= 10) // Condition
    { 
        // Truth block of code, this piece of code is exeuted if condition is true
        // Piece 1 of code
        printf("Computer science is great!");
        printf("Computer science is great!");
        printf("Computer science is great!");
    }
    else
    {
        // False block of code, this piece of code is exeuted if condition is false
        // Piece 2 of code
        printf("Programming is great!");
        printf("Programming is great!");
        printf("Programming is great!");
    }

    return 0;
}   