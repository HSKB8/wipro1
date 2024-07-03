#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize);

int main(int argc, char *argv[])
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int returnArraySize;

    char** myStrCollection = fizzBuzz(n, &returnArraySize); // Here variable returnArraySize memory address is passed to pointer int* returnSize of function: char** fizzBuzz(int n, int* returnSize)

    for (int i = 0; i < returnArraySize; i++)
    {
        printf("%s\n", myStrCollection[i]);
    }

    for (int i = 0; i < returnArraySize; i++)
    {
        free(myStrCollection[i]); // Release all the memory that is allocated using Dynamic Memory Allocation using free() function
    }

    free(myStrCollection); // Free all memory allocated to array of pointers whose first byte is pointed by pointer myStrCollection which is double pointer

    return 0;
}

/*
    * Return an array of size *returnSize.
    * Note: The returned array must be malloced, assume caller calls free().
*/
char** fizzBuzz(int n, int* returnSize)
{
    // Constact strings or string literals
    char *str1 = "FizzBuzz";
    char *str2 = "Fizz";
    char *str3 = "Buzz";

    char myStr[50]; // To store string converted from integer

    // I want to create array of char pointer to point to many strings (words) first byte in memory as char *myStrCollection[n];
    // I can do same thing using pointer to pointer or double pointer concept
    char **myStrCollection; // Pointer to first byte of array of pointers *myStrCollection[n];
    myStrCollection = malloc(n * sizeof(char*));  // finally creating n array of pointers as char *myStrCollection[n];

    for (int i = 0; i < n; i++)
    {
        if((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
        {
            // Create string "FizzBuzz"
            
            // Allocate memory to FizzBuzz string and let the myStrCollection[i] point to that string
            // one for '\0' character at last, because strlen will give only number of characters in the string execluding '\0' character
            myStrCollection[i] = malloc(strlen(str1) + 1); // Need to create separate - separate memory for separate - separate strings
            strcpy(myStrCollection[i], str1); // String with null character is copyied to memory address pointed by string pointer myStrCollection[i]
        }
        else if((i + 1) % 3 == 0)
        {
            // Create string "Fizz"
            
            // Allocate memory to Fizz string and let the myStrCollection[i] point to that string
            // one for '\0' character at last, because strlen will give only number of characters in the string execluding '\0' character
            myStrCollection[i] = malloc(strlen(str2) + 1); // Need to create separate - separate memory for separate - separate strings
            strcpy(myStrCollection[i], str2); // String with null character is copyied to memory address pointed by string pointer myStrCollection[i]

        }
        else if((i + 1) % 5 == 0)
        {
            // Create string "Buzz"
            
            // Allocate memory to Buzz string and let the myStrCollection[i] point to that string
            // one for '\0' character at last, because strlen will give only number of characters in the string execluding '\0' character
            myStrCollection[i] = malloc(strlen(str3) + 1); // Need to create separate - separate memory for separate - separate strings
            strcpy(myStrCollection[i], str3); // String with null character is copyied to memory address pointed by string pointer myStrCollection[i]
        }
        else // Convert i + 1 intro string using atoa(123) function and MACRO #define atoa(x) #x
        {
            // Create a string from integer
            sprintf(myStr, "%d", i + 1); 
            myStrCollection[i] = malloc(strlen(myStr) + 1); // Need to create separate - separate memory for separate - separate strings
            strcpy(myStrCollection[i], myStr);
        }
    }
    *returnSize = n; // Return size is the pointer to integer containing total number of strings. Here, * denotes dereferencing operator used on pointer variable int* returnSize
    return myStrCollection; // Pointer to first byte of array of pointers where individual pointer is denoted by myStrCollection[i] will be individual pointers
}