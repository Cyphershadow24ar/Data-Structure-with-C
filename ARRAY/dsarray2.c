// WAP to find the median of the elements in the given 1D array.The median is the middle value
// of a sorted data set or the average of the two middle values for an even no. of elements.


#include<stdio.h>
void median(int n,int arr[])
{
    int m;
    if(n%2==0)
         m=(arr[(n/2)-1]+arr[((n/2)+1)-1])/2;
    else
         m=arr[((n+1)/2)-1];

    printf("\nThe median of array is %d", m);
}
void main()
    {
        printf("Enter the no. of element in array: ");
        int n;
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements: ");
        int t;
        for(int i=0;i<n;++i)
        {
         scanf("%d",&arr[i]);
        }
        for(int p=1;p<n;++p)
        {
            for(int i=0;i<n-1;++i)
            {
            if(arr[i]>arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
            }
        }
        printf("The sorted array is ");
        for(int i=0;i<n;++i)
        {
            printf("%d, ",arr[i]);
        }
        
        median(n,arr);
    }