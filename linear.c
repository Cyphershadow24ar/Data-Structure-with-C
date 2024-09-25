#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return index of element if found
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
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    // Perform linear search
    int result = linearSearch(arr, n, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
