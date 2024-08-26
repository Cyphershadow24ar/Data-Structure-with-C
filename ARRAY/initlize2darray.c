// #include<stdio.h>
// int main()
// {
//     int arr[5][10];
//     // printf("Enter the Number of elements: ");
//     for(int i=0; i<5 ; i++){
//         for(int j=0; j<10; j++){
//             printf("arr[%d][%d]: ", i,j);
//             scanf("%d ", &arr[i][j]);
//         }
//     }
//     printf("The Elements in the array: ");
//     for(int i=0; i<5; i++){
//         for(int j=0; j<10 ; j++){
//             printf("%d ",arr[i][j]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// #define N 3 // Define the number of rows
// #define M 4 // Define the number of columns

// int main() {
//     int arr[N][M]; // Declare a 2D array with size N x M
//     int sum = 0;   // Variable to store the sum of elements

//     // Initialize the array elements and calculate the sum
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             arr[i][j] = (i + 1) * (j + 1); // You can initialize elements with any values
//             sum += arr[i][j];              // Calculate the sum
//         }
//     }

//     // Print the array elements
//     printf("2D Array:\n");
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     // Print the sum of all elements
//     printf("\nSum of all elements: %d\n", sum);

//     return 0;
// }

// #include<stdio.h>

// void matrixTranspose(int arr[][3], int n, int m) {
//     printf("The Transpose of matrix:\n");
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++)
//             printf("%d ", arr[j][i]);
//         printf("\n");
//     }
// }

// int main() {
//     int n, m;

//     printf("Enter the Number of Rows: ");
//     scanf("%d", &n);
//     printf("Enter the Number of Columns: ");
//     scanf("%d", &m);
    
//     int arr[n][m];

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             printf("arr[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("The Matrix:\n");
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }

//     matrixTranspose(arr, n, m);

//     return 0;
// }

