/*

#include<stdio.h>
int main()
{
    char string[10];
    printf("Enter the string: ");
    scanf("%s", string);
    printf("\n %s",string);
    return 0;
}

char who[110];
scanf( "%109s", who ); // safe, one word
scanf( "%109[^\n]", s ); // safe, multiple words

#include<stdio.h>
int main()
{
    char string[10];
    printf("Enter the String: ");
    gets(string);
    printf("\n%s",string);
    return 0;
}

#include<stdio.h>
int main()
{
    char string[20];
    printf("Enter the string: ");
    fgets(string,20,stdin);         #input from stdin stream
    printf("\nThe string is: %s",string);
    return 0;
}
*/
/*

 * C Program to Replace all the Characters by Lowercase

 */
#include <stdio.h>
#include <string.h>
int main()

{

    char string[1000];
    printf("Input a string to convert to lower case\n");
    gets(string);
    printf("Input string in lower case: %s\n", strlwr(string));
    return 0;
}