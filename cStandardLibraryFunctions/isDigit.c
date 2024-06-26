// isdigit(): This function checks if a character is a decimal digit.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch = '5';
    if (isdigit(ch))
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("%c is not a digit.\n", ch);
    }
    return 0;
}