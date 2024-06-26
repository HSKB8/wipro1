/*

 * Recursive C program to find length of a input string

 */
#include <stdio.h>
int myStringLen(char[], int);
int main()
{
    char myString[50]; // Length of the string is max. of 50 characters
    int myLength = 0;
    printf("Enter the string: \n");
    scanf("%[^\n]s", myString);
    myLength = myStringLen(myString, 0);
    printf("The length of the given string is: %d\n", myLength);
    return 0;
}

int myStringLen(char myStringTemp[], int startingIndex)

{
    static int lengthVar = 0; // Static variable to have memory after going inside each recursive call
    if (myStringTemp[startingIndex] == '\0')
        return lengthVar;
    else
        lengthVar++;
    myStringLen(myStringTemp, startingIndex + 1);
}