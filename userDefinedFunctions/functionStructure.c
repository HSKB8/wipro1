// Concept: Function in C
// Structure of function in C
#include <stdio.h>
void Face(); // Function prototype. It is a promise to C compiler that if I am using a function, then
// you will find my code for sure but later after using it
int main()
{
   // DRY: Do not Repeat Your code, Reuse it rather
   Face(); // Function using, function calling
   Face();
   Face();
   
   return 0;
}

// This is called function in C, named piece of a repeting code, which we want to re-use again and again.
// Function definition
void Face()
{
    // Draw face
   printf("|||\n");
   printf("0 0\n");
   printf("---\n");
   return;
}