#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%dX%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
}