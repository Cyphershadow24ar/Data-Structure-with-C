//Write a C program to perform 3 tuple representation of sparse 
//matrix and display all the elements.

#include <stdio.h>
void main(){
    int m,n,z=0,x=0;
    printf("Enter size of row:");
    scanf("%d",&m);
    printf("Enter size of column:");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0)
                z++;
            else
                x++;
        }
    }
    if(z>x){
        printf("Row\tColumn\tValue\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]!=0)
                    printf("%d\t%d\t%d\n",i,j,arr[i][j]);
            }
        }
    }
    else    
        printf("Not a Sparse Matrix");
}