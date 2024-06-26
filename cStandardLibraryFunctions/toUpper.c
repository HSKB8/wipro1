// toupper(): This function converts a lowercase character to its uppercase equivalent.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch = 'a';
    char uppercase = toupper(ch);
    printf("%c converted to uppercase is %c.\n", ch, uppercase);
    return 0;
}