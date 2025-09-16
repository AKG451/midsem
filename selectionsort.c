#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the unsorted array
    printf("Unsorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // --- Selection Sort Logic ---
    // Outer loop moves the boundary of the sorted subarray
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted part
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        // of the unsorted part (arr[i])
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    // ----------------------------

    // Print the sorted array
    printf("Sorted array (Selection Sort): \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
