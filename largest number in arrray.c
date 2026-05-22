//Write a c program to find the largest of 'n' numbers in the array.

#include<stdio.h>
int main()
{
    int n,a[20],i,large=-1;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("The largest number in the array is=%d\n",large);
    return 0;
}