// WAP to calculate the mean,and standard deviation of the elements in the given 1D array.
// The standard deviation measures the amount of variation or dispersion in the data set.

#include<stdio.h>
#include<math.h>
int mean (int n,int arr[])
    {
        int s=0,m;
        for (int i=0;i<n;++i)
        {
            s=s+arr[i];
            m =s/n;
           
        }
        return m;
    }
   double stand(int m,int n,int arr[])
    {
        int d=0,sum=0;
        double std;
        for (int i=0;i<n;++i)
        {
         d=arr[i]-m;
        sum+=d*d;
        }
         std=sqrt(sum/n);
        
return std;
    }
    void main()
    {
        printf("Enter the no. of element in array : ");
        int n;
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements: ");
        for(int i=0;i<n;++i)
        {
         scanf("%d",&arr[i]);
        }
       int c= mean(n,arr);
       printf("mean is %d\n",c);
       double standard= stand(c,n,arr);

       printf("Standard deviation is %f",standard);
    }