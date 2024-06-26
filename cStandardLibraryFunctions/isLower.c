// islower(): This function checks if a character is a lowercase alphabetic character.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch = 'a';
    if (islower(ch))
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else
    {
        printf("%c is not a lowercase letter.\n", ch);
    }
    return 0;
}