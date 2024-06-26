#include <stdio.h>
#include "himAlgorithms.h"
int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}