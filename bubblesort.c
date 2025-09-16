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

    // --- Bubble Sort Logic ---
    // Outer loop for the number of passes
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for comparisons in each pass
        for (int j = 0; j < size - i - 1; j++) {
            // If the current element is greater than the next one, swap
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // -------------------------

    // Print the sorted array
    printf("Sorted array (Bubble Sort): \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
