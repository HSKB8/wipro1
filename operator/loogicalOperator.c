// Logical operator in C
#include<stdio.h>
int main()
{
   int a = 10;
   int b = 0;

   // OR logical operator, If any of the operand A OR B is True then Result is True. Else result is always False.
   if(a || b) // Condition
   {
        // IF CONDITION IS TRUE THIS PIECE OF CODE WILL RUN
        printf("Condition is TRUE!\n");
   }
   else
   {
        // IF CONDITION IS FALSE THIS PIECE OF CODE WILL RUN
        printf("Condition is FALSE!\n");
   }

   // AND logical operator, If any of the operand A OR B is False then Result is False. Else result is always True.
   if(a && b) // Condition
   {
        // IF CONDITION IS TRUE THIS PIECE OF CODE WILL RUN
        printf("Condition is TRUE!\n");
   }
   else
   {
        // IF CONDITION IS FALSE THIS PIECE OF CODE WILL RUN
        printf("Condition is FALSE!\n");
   }

   // NOT operator, The result is always the negation or complement or opposite of the value of the input.
   // If input is True, then result is False and vice versa.
   if(!(1))
   {
        // IF CONDITION IS TRUE THIS PIECE OF CODE WILL RUN
        printf("Condition is TRUE!\n");
   }
   else
   {
        // IF CONDITION IS FALSE THIS PIECE OF CODE WILL RUN
        printf("Condition is FALSE!\n");
   }
   return 0;
}