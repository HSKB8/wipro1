
void bubbleSort(int arr[], int n)
{
    /*
     * Bubble sort algorithm
     * 1. Comparing adjacent elements
     * 2. Sinking heaviest element to end of array or last index for each outer loop iteration and for each outer loop iteration corrsponding after completion
     * of all inner loop iterations
     * Complexity Analysis:
     * Time Complexity: O(N^2), where N is the number of items in the list. Because two for loops will give total repetition and total
     * swap operations in worst case of none of the elenents of the are sortedb initially is 'n - 1 *  n - 1 - i' the expression which
     * is a polymomial will evaluate to highest degree polymonomial of degree 2 or N^2.
     * Auxiliary Space or Space Complexity: O(1). O(1) means constant memory is utilized by this algorithm irrespective of number of
     * elements to sort.
     */
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        /*
         * Sinking heaviest element to end of array in after completing all inner loops for each outer loop
         * j < n - 1 - i because C array index stars from 0 hemce n-1 and n-1-i because each outer loop iteration denoted by
         * counter variable 'i' and corresponding each inner loop all iterations for each outer loop iteration
         * will sink one heaviest elements to end of array
         */
        for (int j = 0; j < n - 1 - i; j++) // j < n - i - 1 because n - 1 because index starts from 0;
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}

void selectionSort(int arr[], int n)
{
    /*
     * Slecting the minimum element from the current sorted array and put at the top or 'min_elem' index of the current sorted array.
     * Divide the array into two arrays. Sorted array and unsorted array, with help of shiting
     * 'min_elem' index by one place towards end of array for each outer loop iteration and before
     * beginning the corresponding inner loop iteration
     * 'min_elem' always try to point to or store value inside as minimum element in the sorted array
     * Also, 'min_elem' always represents the topmost index of the current sorted portion of the array
     * So, to accomplish the goal of able to have minimum element at 'min_elem' index its keeps on comparing
     * the element present at top of sorted array which is accessed using a[min_elem] with other
     * elements of the sorted array and if during comparision it found the top element is not minimum element in the sorted array it will swap the value of the current element in the array compared with top element of the sorted array is found less than the minimum element present at the top or 'min_elem' index of the current sorted array
     */
    int temp = 0;
    int minElemIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        /*
         * Why j = i + 1? // Shiting which is my top element in the current sorted array for completion of each outer loop iteration
         * before stating of the inner loop first iteration
         * Why j < n? Compare the minimum element present at the top or 'min_elem' index of the current sorted array with all the below elenents
         * of the array till end of the array last element
         * For each outer loop iteration and before beginning of corresponding innter loop all iteration, update top element in
         * form of minElemIndex value of inside the current sorted array
         */
        minElemIndex = i; // This index represents top most elements of the current sorted array
        for (int j = i + 1; j < n; j++)
        {
            /*
             * If current element compared with top element (equals to element reppresented by present at 'minElemIndex')
             * in the current sorted array is less than top element, then swap and make it the top element and minimum element
             * of the current sorted array.
             */
            if (arr[j] < arr[minElemIndex])
            {
                minElemIndex = j; // Select the minimal element index till visiting last element at the end of the array
            }
        }
        // Swap one time not good element present at the top of the current sorted array and minimum element finally found out
        // in the form of minElemIndex and then acessing it using minElemIndex and swapping one time the top element of the 
        // current outer loop representing index of by the current output loop counter and value present at that current outer loop
        // represented index as minimum value in the current loop, which was found not.
        temp = arr[minElemIndex];
        arr[minElemIndex] = arr[i];
        arr[i] = temp;
    }
    return;
}

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    // Loop from the second element of the array
    for (i = 1; i < n; i++) {
        key = arr[i]; // The element to be inserted
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
           to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert the key at the correct position, understanding this line is very important in insertion sort
    }
}
