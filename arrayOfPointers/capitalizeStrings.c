// Arrat of pointers example.
#include <stdio.h>
int main()
{
    char *myStrColletion[3] = {"abc", "def", "ghi"}; // Array of pointers
    char *currentStrPointerVar = 0;
    char currentStrEachIndividualCharVar;
    for (int i = 0; i < 3; i++)
    {
        // This pointer variable points to whole string box
        currentStrPointerVar = myStrColletion[i];
        // This below expression contains 'myStrColletion[i]' exrepression which also represents our
        // pointer variable to first byte of the each individual string
        // So, *(myStrColletion[i] + i); will represent value of each character of each string after starting from first
        // byte pointed by 'myStrColletion[i]' using concept of pointer arithmetic and dereferencing operator
        // Using do-while loop and creating counter variable 'i'
        int j = 0; // Take second counter to jump to character by character
        do
        {
            //currentStrEachIndividualCharVar = *(myStrColletion[i] + j);
            currentStrEachIndividualCharVar = *(currentStrPointerVar + j);
            // If the character is within small case character ASCII code range, then do if TRUE part
            if (currentStrEachIndividualCharVar >= 97 && currentStrEachIndividualCharVar <= 122)
            {
                currentStrEachIndividualCharVar = currentStrEachIndividualCharVar - 32;
            }
            if (currentStrEachIndividualCharVar != '\0') // If it is printable ASCII code character
            {
                printf("%c", currentStrEachIndividualCharVar);
            }
            j++; // Incrementing second counter variable to jump to next character
        } while (currentStrEachIndividualCharVar != '\0');
        printf("\n"); // After printing whole string in capital letters print one line
    }
    return 0;
}