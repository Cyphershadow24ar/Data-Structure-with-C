#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int target, int n) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Function to perform bubble sort
void bubble_sort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform selection sort
void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to perform insertion sort
void insertion_sort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void print_array(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int choice, n, i, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Binary Search\n");
        printf("2. Bubble Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Insertion Sort\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the target element: ");
                scanf("%d", &target);
                int result = binary_search(arr, target, n);
                if (result != -1)
                    printf("Element found at index %d\n", result);
                else
                    printf("Element not found\n");
                break;
            case 2:
                bubble_sort(arr, n);
                printf("Sorted array: ");
                print_array(arr, n);
                break;
            case 3:
                selection_sort(arr, n);
                printf("Sorted array: ");
                print_array(arr, n);
                break;
            case 4:
                insertion_sort(arr, n);
                printf("Sorted array: ");
                print_array(arr, n);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}