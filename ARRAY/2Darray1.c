//Experiments with a 2-dimensional array of size N x M 
//and calculate the sum of all its elements.

#include<stdio.h>
int main()
{
    int n,m,sum =0;

       printf("Enter the Number of Rows: ");
       scanf("%d",&n);
       printf("Enter the Number of colums: ");
       scanf("%d",&m);
       
       int arr[n][m];

    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
             sum += arr[i][j];
        }
    }
    printf("The Matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Sum of all its Element: %d", sum);
    return 0;
}