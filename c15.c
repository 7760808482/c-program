#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int sum,n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    if(p==NULL)
    {
        printf("Empty space");
        return 0;

    }
    printf("Enter the %d number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        for(i=0;i<n;i++)
        {
            sum=sum+*(p+i);
        }
        printf("Sum is %d",sum);
        free(p);
        return 0;
    }
}