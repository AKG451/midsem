#include <stdio.h>

int main() {
    // The array MUST be sorted for binary search
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    int found_index = -1;
    int left = 0;
    int right = size - 1;

    // --- Binary Search Logic ---
    // Continue searching as long as the left index is <= the right
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            found_index = mid;
            break; // Found it! Stop the loop.
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
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
