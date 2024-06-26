/*
    * Linear search algorithm.
    * Purpose: Search a given element in the given array.
    * Algorithm main idea / intension: Iterate one by one to each element of the array starting from the first element of the array.
    * While visiting each element compare it with given searched element, if the match is found return true (1) else return false (0).
    * Time complexity: O(N)
      ** Why time complexity of linrar search is O(N): Linear search runs in linear time and makes a maximum of n 
         comparisons, where n is the length of the list. Hence, the computational complexity for linear search is O(N).
    * Space complexity: O(1)
      ** Why is the space complexity for linear search O(1)?
         *** What does O(1) space mean? It means that the amount of memory your algorithm consumes doesn't depend on the input.
             The algorithm should use the same amount of memory for all inputs. So, the linear search only need one element
             need(that is the variable you used to compare with all the elements in the array), so no matter how big or small 
             your array is, the algorithm only consumes the same amount of memory for all input, and thus is space complexity is O(1)
         *** References
             **** https://stackoverflow.com/questions/69595360/why-is-the-space-complexity-for-linear-search-o1
*/
// Linear search code
#include <stdio.h>
#define ELEM_NOT_FOUND_INDEX_VALUE -1 // #define is used to provide human friendly name to numerical constants in C programs
int linearSearch(int arr[], int n, int searchElem); // Function prototype
int main()
{
    // Array
    int myArray[] = {6, 3, 15, -1, 0, 21, 4, 3, 9, 21}, searchElem, elemFounIndex, n; 
    // Calculate the size of the array, no. of elem. in the list
    n = sizeof(myArray) / sizeof(myArray[0]);  
    printf("Enter the element to search:");
    scanf("%d", &searchElem); // scanf("%d", &x); // Input
    elemFounIndex = linearSearch(myArray, n, searchElem); // Calling piece of a code
    // C Ternay operator
    (elemFounIndex != ELEM_NOT_FOUND_INDEX_VALUE) ? printf("Element found.\n") : printf("Element not found.\n");
    return 0;
}
// Function definition
int linearSearch(int arr[], int n, int searchElem)
{
    // Assume initially element is not existing in the given array, this is indicated by flag = 0, if element is found then // flag becomes = 1,
    int elemFoundIndex = ELEM_NOT_FOUND_INDEX_VALUE;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchElem)
        {
            // Search elem. found, set the flag = true, and break elemFoundIndex = i;
            elemFoundIndex = i;
            break;
        }
    }
    return elemFoundIndex;
}