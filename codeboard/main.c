#include <stdio.h>
int main()
{
    int arr[] = {45, 23, 1, -1, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) // Current position
    {
        int i, j, min;
        int temp;

        min = i;                        // Assume current i positon peresent element is minimum
        for (int j = i + 1; j < n; j++) // Mover next to i that will find min index
        {
            if (arr[j] < arr[min]) // if any moved element through j ahead of i, found minimum, then exchance our ith element
            {
                min = j; // Found the min index
            }
        }
        // Swap
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
