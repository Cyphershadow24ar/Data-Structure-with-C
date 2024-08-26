//Write with a 2-dimensional array of size N x M ar input and returns a new array containing the transpose of the original matrix.

#include<stdio.h>
void matrixtranspose(int arr[][3],int n, int m)
{
    printf("The Transpose of matix:\n");
        for(int i=0 ; i<m; i++)
        {
            for(int j=0; j<n; j++)
            printf("%d ",arr[j][i]);
        
        printf("\n");
        }
}

int main()
{
    int n,m;

       printf("Enter the Number of Rows: ");
       scanf("%d",&n);
       printf("Enter the Number of colums: ");
       scanf("%d",&m);
       
       int arr[n][m];

    for(int i=0; i<n ; i++)
        {
        for(int j=0; j<m; j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix:\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m ; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
   matrixtranspose(arr,n,m);
   return 0;
}
