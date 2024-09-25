#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid; // Return index of element if found
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // Return -1 if element not found
}

int main() {
    int arr[100], n, key;
    
    // Input size of the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    // Input elements of the array
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    // Perform binary search
    int result = binarySearch(arr, n, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
