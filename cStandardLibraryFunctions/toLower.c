// tolower(): This function converts an uppercase character to its lowercase equivalent.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch = 'A';
    char lowercase = tolower(ch);
    printf("%c converted to lowercase is %c.\n", ch, lowercase);
    return 0;
}