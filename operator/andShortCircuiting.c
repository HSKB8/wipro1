// AND Short-curcuiting case
#include<stdio.h>
int main()
{
   int a = 10;
   int b = 20;
   // AND operator short circuiting. If first operand is 0, then compiler makes whole result 0
   // it will not do any further check in expression so here a++ and b++ expression are not evaluated
   // hence value of a and b will remain 10, 20 respectively and will not change to 11, 21.
   if(0 && a++ && b++)
   {
    printf("Condition is true.\n");
   }
   else
   {
    printf("Condition is false.\n");
   }
   printf("a = %d, b = %d\n", a, b);

   return 0;
}