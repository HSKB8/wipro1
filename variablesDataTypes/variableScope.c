// Scope of variables in C
#include <stdio.h>
int x = 111; // Variable at Global scope
void f1()
{
    printf("1. x = %d\n", x); // Global variable can be seen everywhere in all functions, so x = 111 here
    // Local scope or function scope, if local variable and global variable both present, then
    // local variable value will take preference over global variable
    // local variable can only seen within function
    int x = 222;
    printf("2. x = %d\n", x); // We will see value of the variable as local variable here = 222
} // x = 222 local variable end here
int main()
{
    f1(); // Call the function f1()
    // Scopes in C
    printf("3. x = %d\n", x); // x = 111
    int x = 333; // local variable
    printf("4. x = %d\n", x); // x = 333
    { // Very local socope, very temporary time get disconnected with local variable, time start here
       int x = 444;
        printf("5. x = %d\n", x); // We see a value of very local scope variable x = 444
    } // time ends here
    printf("6. x = %d\n", x); // // We see a value of local scope variable x = 333
    return 0;
}  // x = 333 local variable end here