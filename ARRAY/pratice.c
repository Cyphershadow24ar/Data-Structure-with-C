//delcare an array and find the largest and the smallest no.

// #include<stdio.h>
// int main ()
// {
//     int arr[10];
//     printf("Enter 10 elemnts in the array:\n");
//     for (int i=0; i<10; i++)
//     {
//         printf("Enter element %d:", i+1);
//         scanf("%d",&arr[i]);   
//     }

//     int largest , smallest;
//     largest=smallest=arr[0];

//     for(int i=1;i<10;i++)
//     {
//       if (arr[i]> largest)
//       {
//         largest =arr[i];
//       }
//       if (arr[i]<smallest)
//       {
//         smallest =arr[i];
//       }
//     }

//     printf("The largest element is %d\n",largest);
//     printf("The smallest element is %d\n",smallest);
//  return 0;
// }


//Reverse of the array.
// #include <stdio.h>

// int main() {
//     int size, i, temp;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Original array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     for (i = 0; i < size / 2; i++) {
//         temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }

//     printf("Reversed array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
