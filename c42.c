#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Entert the elemnet from the array:\t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("The entert the elemtes are:\t\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}