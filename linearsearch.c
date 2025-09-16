#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    int found_index = -1; // Use -1 to mean "not found"

    // --- Linear Search Logic ---
    // Loop through every element in the array
    for (int i = 0; i < size; i++) {
        // If the current element matches the target...
        if (arr[i] == target) {
            found_index = i; // ...store the index...
            break;           // ...and stop the loop.
        }
    }
    // ---------------------------

    // Print the result
    if (found_index == -1) {
        printf("Element %d was not found in the array.\n", target);
    } else {
        printf("Element %d was found at index %d.\n", target, found_index);
    }

    return 0;
}
