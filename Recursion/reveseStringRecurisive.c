/*
 * C Program to Reverse the String using Recursion
 */
#include <stdio.h>
#include <string.h>

// Function prototype
// It is not necessary write parameter name in function prototype
void reverseMyString(char [], int, int);

int main()
{
    char myString[50];
    int myStrLen;
 
    printf("Enter a string to reverse: ");
    scanf("%s", myString);
    myStrLen = strlen(myString);
    reverseMyString(myString, 0, myStrLen - 1);
    printf("The string after reversing is: %s\n", myString);
    return 0;
}
 
void reverseMyString(char tempStr[], int startIndex, int myStrLenVar)
{
    char tempCurrentChar;
    tempCurrentChar = tempStr[startIndex];
    tempStr[startIndex] = tempStr[myStrLenVar - startIndex]; 
    tempStr[myStrLenVar - startIndex] = tempCurrentChar;
    if (startIndex == myStrLenVar / 2) // Exit Condition
    {
        return;
    }
    reverseMyString(tempStr, startIndex + 1, myStrLenVar); // Recursive call
}