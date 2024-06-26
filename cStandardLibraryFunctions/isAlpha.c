//  isalpha(): This function checks if a character is an alphabetical character.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch = 'A';
    int result = isalpha(ch);
    if (result == 1)
    {
        printf("%c is an alphabetic character.\n", ch);
    }
    else
    {
        printf("%c is not an alphabetic character.\n", ch);
    }
    return 0;
}