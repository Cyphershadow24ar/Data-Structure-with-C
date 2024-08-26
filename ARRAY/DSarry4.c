// //Consider the array containing test scores of 20 students
// test_scores = (85, 78, 92, 65, 89, 76, 94, 81, 87, 90,72, 88, 95, 79, 83, 91, 70, 84, 86, 93] Write a program to:
// A. Calculate the average score and the highest score achieved.
// B. Count the number of students who passed (scored above a certain passing threshold) and the number of students who failed.
// C. Determine the grade distribution, i.e., count the number of students falling into different grade ranges (e.g., O, E, A, B, F).

#include<stdio.h>
void avr(int arr[])
{
    int sum=0;
        for(int i=0;i<20;++i)
        {
         sum+=arr[i];
        }
    int av=sum/20;
    printf("The average mark is %d\n",av);
    int h=arr[0];
    for(int i=0;i<20;++i)
    {
        if(arr[i]>h)
        h=arr[i];
    }
    printf("Highest score is %d\n",h);
}
void pass_fail(int arr[])
{
    int p=0,f=0;
    for(int i=0;i<20;++i)
        {
         if(arr[i]>80)
         p++;
         else
         f++;
        }
         printf("\nThe no. of students passed is %d\n",p);
         printf("The no. of students fail is %d\n",f);

}
void grade (int arr[])
{
    printf("\nGrade of marks above 90 is \"O\"\n");
    printf("Grade of marks above 80 is \"E\"\n");
    printf("Grade of marks above 70 is \"A\"\n");
    printf("Grade of marks above 60 is \"B\"\n");
    printf("Grade of marks below 61 is \"F\"\n");
    int o=0,e=0,a=0,b=0,f=0;
    for(int i=0;i<20;++i)
    {
        if(arr[i]>90)
        o++;
        else if(arr[i]<91&&arr[i]>80)
        e++;
        else if(arr[i]<81&&arr[i]>70)
        a++;
        else if(arr[i]<71&&arr[i]>60)
        b++;
        else if(arr[i]<61)
        f++;
    }
    printf("\nNumber of \"O\" grade students are %d\n",o);
    printf("Number of \"E\" grade students are %d\n",e);
    printf("Number of \"A\" grade students are %d\n",a);
    printf("Number of \"B\" grade students are %d\n",b);
    printf("Number of \"F\" grade students are %d\n",f);
}
void main()
    {
         int arr[20]={85,78,92,65,89,76,94,81,87,90,72,88,95,79,83,91,70,84,86,93};
         avr(arr);
         pass_fail(arr);
         grade(arr);
    }