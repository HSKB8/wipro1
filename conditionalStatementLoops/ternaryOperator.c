// Concept: 
#include <stdio.h>
int main()
{
  int x = 10;
  
  // if - else statement, if doing only 1 task in true case and false case, then C Ternary operator is based to use.
  if(x == 10)
  {
      //Piece 1 of code
      printf("Computer science is great!");
  }
  else
  {
      //Piece 2 of code 
      printf("Programming is great!");
  }
  
  // C ternary operator, result of below statement is same as above if-else
  (x == 10) ?  printf("Computer science is great!") : printf("Programming is great!");
  
   return 0;
}