//Consider the array containing temperature data for a week (Sunday to Saturday)
// temperature_data = [25, 28, 27, 30, 31, 29, 26]
// Write a program to perform the following tasks:
// A. Find the average temperature for the week.
// B. Identify the hottest day (highest temperature) and the coldest day (lowest temperature) of the week.
// C. Calculate the temperature range (difference between the hottest and coldest days).

#include<stdio.h>
void temp(int arr[])
{
    int sum=0;
        for(int i=0;i<7;++i)
        {
         sum+=arr[i];
        }
    int av=sum/7;
    printf("The average temperature for the week is %d\n",av);
}
void hot_cold(int arr[],char a[][10])
{
    int h=arr[0];
    int c=arr[0];
    for(int i=0;i<7;++i)
        {
        if(arr[i]<c)
        c=arr[i];
        }
         for(int i=0;i<7;++i)
        {
        if(arr[i]>h)
        h=arr[i];
        
         }
         int d=h-c;
         for(int i=0;i<7;++i)
         {
            if(arr[i]==h)
            printf("The hottest day of the week is %s and it's tempertature is %d\n",a[i],h);
            if(arr[i]==c)
            printf("The coldest day of the week is %s and it's tempertature is %d\n",a[i],c);
         }
    
    printf("the temperature range is %d\n",d);
}

     void main()
    {
         int arr[7]={25,28,27,30,31,29,26};
         char a[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
         temp(arr);
         hot_cold(arr,a);

    }