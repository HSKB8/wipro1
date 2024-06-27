// Problem: Data type and variables in C
#include<stdio.h>
int main()
{
   // Store integer in C
   // data type variable_name;
   // 1) data type should of right type (e.g. for integer data which should interger data type not float)
   // 2) We should use correct size of the data type
   // 3) Because wrong data types are used for the variables, so this progam will warn you by giving warning for them. They should be corrected
   //    but they are not errors.
   int x;
   x = 1.2;
   // Why it is necessary to use the right data type with variables
   // We will get wrong value, garbage value or we will loose the data
   printf("x = %d\n", x);
   
   // Storing a number inside it but very large but less than highest limit
   // Int data type limit : -2,147,483,648 to 2,147,483,647 
   int a;
   a = 2147483647;
   printf("a = %d\n", a);
   
   // Storing a number inside it but very large more than its highest limit
   // Int data type limit : -2,147,483,648 to 2,147,483,647 
   int b;
   b = 2147483647 + 1;
   printf("b = %d\n", b);


   // unsigned int, size = 0 to 4,294,967,295
   unsigned int c;
   c = 2147483647 + 1;
   printf("c = %u\n", c);
  
   // Floating point value in C
   float y; // right data type is used for storing floating point value (or decimal value)
   y = 1.2;
   printf("y = %f\n", y);

   // I want to store 250, maximum range I want to work is 0 to 255
   unsigned short int d;
   d = 250;
   printf("d = %d", d);

   // Store one character in charactyer
   char ch; // signed char or char
   ch = 'A';
   printf(ch = "%c", ch);
   
   return 0;
}